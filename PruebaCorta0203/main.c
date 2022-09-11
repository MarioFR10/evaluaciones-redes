#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *binToHex(char *bin)
{
    char *p = bin;
    long num = 0;
    do
    {
        int b = *p == '1' ? 1 : 0;
        num = (num << 1) | b;
        p++;
    } while (*p);
    printf("Hexadecimal, 0x%LX\n", num);
}

char *hexCharToBin(char *bin, char c)
{
    int num = 0;

    if (c > '9')
        num = c - '7';
    if (c <= '9')
        num = c - '0';

    for (int i = 3; i >= 0; i--)
    {
        bin[i] = (num & 1) ? '1' : '0';
        num >>= 1;
    }
    bin[4] = '\0';
    return bin;
}

int checkWithMask(int *mask, int len, char *c)
{
    int parity = 0;
    for (int i = 0; i < len; i++)
    {
        if (c[mask[i]] & 1)
        {
            parity++;
        }
    }
    if (parity % 2 == 0)
    {
        return 0;
    }

    return 1;
}

void encode(char *rawInput)
{
    char *input = malloc(strlen(rawInput) - 2);
    for (int i = 2; i < strlen(rawInput); ++i)
    {
        input[i - 2] = rawInput[i];
    }
    int len = strlen(input);

    char *finalHexToBin = "";
    for (int k = 0; k < len; k++)
    {
        char bin[4];
        char *concat = malloc(strlen(finalHexToBin) + strlen(bin) + 1);
        hexCharToBin(bin, input[k]);
        strcpy(concat, finalHexToBin);
        strcat(concat, bin);
        finalHexToBin = concat;
    }

    printf("Representacion en binario de la cadena hexadecimal: %s\n", finalHexToBin);

    int extraBits = 7 - (strlen(finalHexToBin) % 7);
    char *extraBitsChar = malloc(extraBits);
    for (int j = 0; j < extraBits; j++)
    {
        extraBitsChar[j] = '0';
    }
    extraBitsChar[extraBits] = '\0';

    char *hammingString = malloc(strlen(finalHexToBin) + strlen(extraBitsChar) + 1);
    strcpy(hammingString, extraBitsChar);
    strcat(hammingString, finalHexToBin);

    printf("Binario relleno de 0s: %s\n", hammingString);

    int numberOfCodifications = strlen(hammingString) / 7;

    int mask1[5] = {0, 2, 3, 5, 6};
    int mask2[5] = {0, 1, 3, 4, 6};
    int mask4[3] = {3, 4, 5};
    int mask8[3] = {0, 1, 2};

    char *finalEncoded = "";
    for (int i = 0; i < numberOfCodifications; i++)
    {
        char encoded[12];
        char splitted[8];
        int aux = 0;

        for (int j = i * 7; j < (i * 7) + 7; j++)
        {
            splitted[aux] = hammingString[j];
            aux++;
        }

        int mask1Parity = checkWithMask(mask1, 5, splitted);
        int mask2Parity = checkWithMask(mask2, 5, splitted);
        int mask4Parity = checkWithMask(mask4, 3, splitted);
        int mask8Parity = checkWithMask(mask8, 3, splitted);

        int aux2 = 0;

        for (int k = 0; k <= 11; k++)
        {
            if (k == 10)
            {
                encoded[k] = mask1Parity ? '1' : '0';
            }
            else if (k == 9)
            {
                encoded[k] = mask2Parity ? '1' : '0';
            }
            else if (k == 7)
            {
                encoded[k] = mask4Parity ? '1' : '0';
            }
            else if (k == 3)
            {
                encoded[k] = mask8Parity ? '1' : '0';
            }
            else
            {
                encoded[k] = splitted[aux2];
                aux2++;
            }
        }

        char *concat = malloc(strlen(finalEncoded) + strlen(encoded) + 1);

        strcpy(concat, finalEncoded);
        strcat(concat, encoded);
        finalEncoded = concat;
    }

    printf("Binario codificado: %s\n", finalEncoded);
    binToHex(finalEncoded);
}

void decode(char *rawInput)
{
    char *input = malloc(strlen(rawInput) - 2);
    for (int i = 2; i < strlen(rawInput); ++i)
    {
        input[i - 2] = rawInput[i];
    }
    int len = strlen(input);

    char *finalHexToBin = "";
    for (int k = 0; k < len; k++)
    {
        char bin[4];
        char *concat = malloc(strlen(finalHexToBin) + strlen(bin) + 1);
        hexCharToBin(bin, input[k]);
        strcpy(concat, finalHexToBin);
        strcat(concat, bin);
        finalHexToBin = concat;
    }

    printf("Representacion en binario de la cadena hexadecimal: %s\n", finalHexToBin);

    int extraBits = 7 - (strlen(finalHexToBin) % 7);
    char *extraBitsChar = malloc(extraBits);
    for (int j = 0; j < extraBits; j++)
    {
        extraBitsChar[j] = '0';
    }
    extraBitsChar[extraBits] = '\0';

    char *hammingString = malloc(strlen(finalHexToBin) + strlen(extraBitsChar) + 1);
    strcpy(hammingString, extraBitsChar);
    strcat(hammingString, finalHexToBin);

    printf("Binario relleno de 0s: %s\n", hammingString);

    int numberOfCodifications = strlen(hammingString) / 11;

    int mask1[6] = {0, 2, 4, 6, 8, 10};
    int mask2[6] = {0, 1, 4, 5, 8, 9};
    int mask4[4] = {4, 5, 6, 7};
    int mask8[4] = {0, 1, 2, 3};

    char *finalDecoded = "";
    for (int i = 0; i < numberOfCodifications; i++)
    {
        char decoded[8];
        char splitted[12];
        int aux = 0;

        for (int j = i * 11; j < (i * 11) + 11; j++)
        {
            splitted[aux] = hammingString[j];
            aux++;
        }

        int mask1Parity = checkWithMask(mask1, 6, splitted);
        int mask2Parity = checkWithMask(mask2, 6, splitted);
        int mask4Parity = checkWithMask(mask4, 4, splitted);
        int mask8Parity = checkWithMask(mask8, 4, splitted);

        if (mask1Parity & mask2Parity & mask4Parity & mask8Parity)
        {
            printf("Ha ocurrido un error en la cadena\n");
            return;
        }

        int aux2 = 0;
        for (int k = 0; k <= 11; k++)
        {
            if (k != 10 || k != 9 || k != 7 || k != 3)
                decoded[aux2] = splitted[k];
                aux2++;
        }

        char *concat = malloc(strlen(finalDecoded) + strlen(decoded) + 1);

        strcpy(concat, finalDecoded);
        strcat(concat, decoded);
        finalDecoded = concat;
    }

    printf("Binario decodificado: %s\n", finalDecoded);
    binToHex(finalDecoded);
}

int main(int argc, char *argv[])
{

    if (argc < 2)
    {
        printf("Program must at least 2 arguments\n");
        return 0;
    }

    if (strcmp(argv[1], "encode") == 0)
    {
        encode(argv[3]);
    }
    else if (strcmp(argv[1], "decode") == 0)
    {
        decode(argv[3]);
    }
    else
    {
        printf("Program must receive one of 2 options (encode/decode)\n");
        return 0;
    }

    return 0;
}