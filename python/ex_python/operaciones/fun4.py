
def fibonacci(n):
    a = 0
    b = 1
    serie = []
    for i in range(0, n, +1):
        serie.append(str(a))
        c = a +b
        a = b
        b = c
    
    serie_inversa = ""
    for k in serie:
        serie_inversa = k + ", " + serie_inversa
    print("Serie Inversa: ")
    print("",n,"->",serie_inversa,"")