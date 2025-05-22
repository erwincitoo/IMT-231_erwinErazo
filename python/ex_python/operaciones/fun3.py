def lista_primos(n):
    lista = []
    for j in range(2, n+1):
        divisible = 0
        for i in range (1, j+1):
            if (j % i == 0):
                divisible += 1
        if (divisible == 2):
            lista.append(j)
    
    for num in lista:
        print("Número Primo: ",num,"")
