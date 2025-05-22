from operaciones import contar
from operaciones import piramide
from operaciones import alternada
from operaciones import capicua
from operaciones import primo

while True:
    print("---- MENÚ DE OPCIONES ----")
    print("1. Contar cúantos números entre 1 y N son divisibles por 3 o terminan en 3")
    print("2. Imprimir una pirámide de astericos de altura N")
    print("3. Dado un número N, mostrar la secuencia de los primeros N términos de serie: 1, -2, 3, -4, 5, -6")
    print("4. Mostrar la cantidad de números primos entre 1 y N")
    print("5. Verificar si un número es palíndromo (número capicúa)")
    print("6. Salir del programa")
    print("")

    opcion = int(input("Ingrese una opción: "))
    if (opcion==6):
        print("Saliendo del programa...")
        break

    elif (opcion==1):
        n = int(input("Ingrese un número: "))
        resultado = contar(n)
        print("")
    
    elif (opcion==2):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 0):
                print("")
                resultado = piramide(n)
                print("")
                break
            else:
                print("Ingrese un número positivo")
    elif (opcion==3):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 0):
                print("")
                resultado = alternada(n)
                print("")
                break
            else:
                print("Ingrese un número positivo")

    elif (opcion==4):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 1):
                print("")
                resultado = primo(n)
                print("")
                break
            else:
                print("Ingrese un número positivo mayor a 1")

    
    elif (opcion==5):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 0):
                print("")
                resultado = capicua(n)
                print("")
                break
            else:
                print("Ingrese un número positivo")
    
    
                

