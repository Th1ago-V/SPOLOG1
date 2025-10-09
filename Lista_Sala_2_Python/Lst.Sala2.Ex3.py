n1 = int(input("Entre com o valor do primeiro numero: "))
n2 = int(input("Entre com o valor do segundo numero: "))

if( n1 > n2):
    d = n1 - n2
    print("O primeiro numero é maior, a diferença é ", d)
elif( n1 == n2 ):
    print("Os numeros são iguais")
else:
    d = n2 - n1
    print("O segundo numero é maior, a diferença é ", d)