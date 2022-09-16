# Imports
import pyaudio
import wave
import matplotlib.pyplot as plt
import numpy as np
from scipy.io import wavfile

# Constantes
CHUNK = 1024
FORMAT = pyaudio.paInt16
CHANNELS = 2  # Canal izquierdo y derecho
RATE = 44100

# Mejorar aspecto de graficos
plt.rcParams['figure.dpi'] = 100
plt.rcParams['figure.figsize'] = (9, 7)

# Funciones


def signal_processor(file_path):

    sampFreq, sound = wavfile.read(file_path)
    sound = sound / 2.0**15
    length_in_s = sound.shape[0] / sampFreq

    time = np.arange(sound.shape[0]) / sound.shape[0] * length_in_s
    signal = sound[:, 0]

    fft_spectrum = np.fft.rfft(signal)
    freq = np.fft.rfftfreq(signal.size, d=1. / sampFreq)

    fft_spectrum_abs = np.abs(fft_spectrum)

    plt.figure(1)
    plt.plot(freq[:3000], fft_spectrum_abs[:3000])
    plt.xlabel("frequency, Hz")
    plt.ylabel("Amplitude, units")

    plt.figure(2)
    plt.plot(time[6000:7000], signal[6000:7000])
    plt.xlabel("time, s")
    plt.ylabel("Signal, relative units")

    plt.show()


def record():
    p = pyaudio.PyAudio()
    stream = p.open(format=FORMAT,
                    channels=CHANNELS,
                    rate=RATE,
                    input=True,
                    frames_per_buffer=CHUNK)

    print("Inicio grabacion...")

    frames = []

    try:
        while True:
            data = stream.read(CHUNK)
            frames.append(data)
    except KeyboardInterrupt:
        print("Grabacion detenida...")
    except Exception as e:
        print(e)

    sample_width = p.get_sample_size(FORMAT)

    stream.stop_stream()
    stream.close()
    p.terminate()

    return sample_width, frames


def play(file_path):
    f = wave.open(file_path, "rb")
    p = pyaudio.PyAudio()

    stream = p.open(format=p.get_format_from_width(f.getsampwidth()),
                    channels=f.getnchannels(),
                    rate=f.getframerate(),
                    output=True)

    data = f.readframes(CHUNK)

    while data:
        stream.write(data)
        data = f.readframes(CHUNK)

    stream.stop_stream()
    stream.close()

    p.terminate()


def record_to_file(file_path):
    
    print('#' * 80)
    print("Por favor hable al microfono")
    print("Presione Ctrl+C para detener la grabacion")
    
    wf = wave.open(file_path, 'wb')
    wf.setnchannels(CHANNELS)
    sample_width, frames = record()
    wf.setsampwidth(sample_width)
    wf.setframerate(RATE)
    wf.writeframes(b''.join(frames))
    wf.close()
    
    print("Resultado guardado en", file_path)
    print('#' * 80)


def menu():
    try:
        while True:
            print("1. Analizador")
            print("2. Reproductor")
            print("3. Salir")
            option = int(input("Favor ingresar una opcion: "))

            if option == 1:
                print("1. Audio streaming")
                print("2. Audio batch")
                option1 = int(input("Favor ingresar una opcion: "))
                file_path = input(
                    "Favor ingresar el nombre del archivo: ")
                
                if option1 == 1:
                    record_to_file(file_path)
                    signal_processor(file_path)
                elif option1 == 2:
                    signal_processor(file_path)
                else:
                    print("La opcion elegida es invalida...")

            elif option == 2:
                file_path = input(
                    "Favor ingresar el nombre del archivo: ")
                play(file_path)
            else:
                break

    except Exception as e:
        print("Se ha producido el siguiente error ->", e)
        menu()
    finally:
        print("Saliendo de autrum...")


if __name__ == '__main__':
    menu()
