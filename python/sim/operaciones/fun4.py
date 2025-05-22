def primo(n):
    contador = 0
    for j in range(2, n+1):
        divisible = 0
        for i in range (1, j+1):
            if (j % i == 0):
                divisible += 1
        if (divisible == 2):
            contador += 1
    print("Cantidad Números Primos: ",contador,"")
