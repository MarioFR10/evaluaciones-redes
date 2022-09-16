import pyaudio
import wave

CHUNK = 1024
FORMAT = pyaudio.paInt16
CHANNELS = 2
RATE = 44100

def record():
    p = pyaudio.PyAudio()
    stream = p.open(format=FORMAT,
                    channels=CHANNELS,
                    rate=RATE,
                    input=True,
                    frames_per_buffer=CHUNK)

    print("Inicio grabacion")

    frames = []

    try:
        while True:
            data = stream.read(CHUNK)
            frames.append(data)
    except KeyboardInterrupt:
        print("Grabacion detenida")
    except Exception as e:
        print(str(e))

    sample_width = p.get_sample_size(FORMAT)
    
    stream.stop_stream()
    stream.close()
    p.terminate()
    
    return sample_width, frames


def play(): 
    f = wave.open(r"./output.wav","rb")  
    p = pyaudio.PyAudio()  
    
    stream = p.open(format = p.get_format_from_width(f.getsampwidth()),  
                    channels = f.getnchannels(),  
                    rate = f.getframerate(),  
                    output = True)  
    
    data = f.readframes(CHUNK)  

    while data:  
        stream.write(data)  
        data = f.readframes(CHUNK)  

    stream.stop_stream()  
    stream.close()  

    p.terminate()

def record_to_file(file_path):
    wf = wave.open(file_path, 'wb')
    wf.setnchannels(CHANNELS)
    sample_width, frames = record()
    wf.setsampwidth(sample_width)
    wf.setframerate(RATE)
    wf.writeframes(b''.join(frames))
    wf.close()


if __name__ == '__main__':
    print('#' * 80)
    print("Por favor hable al microfono")
    print("Presione Ctrl+C para detener la grabacion")
    
    record_to_file('output.wav')
    
    print("Resultado guardado en ./output.wav")
    print('#' * 80)
 
    play()
 