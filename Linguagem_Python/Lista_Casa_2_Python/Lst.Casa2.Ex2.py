A = int(input("Entre com um número de 0 a 100: "))
B = A - 43

if(B >= 0):
    print("O número inserido está", B, "unidades distante do número chave")
else:
    B = -1 * B
    print("O número inserido está", B, "unidades distante do número chave")