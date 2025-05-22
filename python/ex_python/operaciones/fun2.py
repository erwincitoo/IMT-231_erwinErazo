def piramide(n):
    estructura = ""
    abecedario = ["A ", "B ", "C ", "D ", "E ", "F ", "G ", "H ", "I ", "J ", "K ", "L ", "M ", "Ñ ", "O ", "P ",
              "Q ", "R ", "S ", "T ", "U ", "V ", "W ", "X ", "Y ", "Z "]
    j = 0
    contador = 0
    while contador < n:
        estructura += abecedario[j]
        print(estructura)
        j += 1
        contador += 1