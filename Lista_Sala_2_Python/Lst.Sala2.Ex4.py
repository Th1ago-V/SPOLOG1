A = int(input("Entre com o valor do lado A: "))
B = int(input("Entre com o valor do lado B: "))
C = int(input("Entre com o valor do lado C: "))

if(A + B > C and A + C > B and B + C > A ):
    if(A==B!=C or A==C!=B or B==C!=A):
        print("O triangulo é isoceles")
    elif(A != B and A != C and B != C):
        print("O triangulo é escaleno")
    else:
        print("O triangulo é equilatero")
else:
    print("Não é um triangulo")