def capicua(n):
    invertido = ""
    n_cadena = str(n)
    
    for digito in n_cadena:
        invertido = str(digito) + invertido
    
    if (invertido == n_cadena):
        print("El número ",n," es capicúa.")
    else:
        print("El número ",n," no capicúa.")

