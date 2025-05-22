from operaciones import suma_divisores
from operaciones import lista_primos
from operaciones import piramide
from operaciones import fibonacci

while True:
    print("")
    print("---- MENÚ DE OPCIONES ----")
    print("1. Calcular la suma de todos los divisores de un número N (excluyendo el propio número)")
    print("2. Generar un triángulo de caracteres con letras del alfabeto hasta una altura N")
    print("3. Mostrar los primeros N números primos")
    print("4. Generar la secuencia de los primeros N términos de la serie de Fibonacci inversa.")
    print("5. Salir del programa")
    print("")

    opcion = int(input("Ingrese una opción: "))
    if (opcion==5):
        print("Gracias por usar el programa!")
        print("Saliendo del programa...")
        break

    elif (opcion==1):
        n = int(input("Ingrese un número: "))
        resultado = suma_divisores(n)
        print("")
    
    elif (opcion==2):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 0 and n <= 26):
                print("")
                resultado = piramide(n)
                print("")
                break
            else:
                print("Ingrese un número mayor a 0 y menor a 27 por favor...")
                print("")
    elif (opcion==3):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 1):
                print("")
                resultado = lista_primos(n)
                print("")
                break
            else:
                print("Ingrese un número positivo mayor a 1 por favor...")
                print("")

    elif (opcion==4):
        while True:
            n = int(input("Ingrese un número: "))
            if (n > 0):
                print("")
                resultado = fibonacci(n)
                print("")
                break
            else:
                print("Ingrese un número positivo por favor")
                print("")
    else:
        print("Opción no valida... Ingrese una correcta")