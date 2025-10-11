n1 = int(input("Entre com o valor da primeira nota: "))
n2 = int(input("Entre com o valor da segunda nota: ")) 
m = (n1 + n2)/2

if(m >= 6.0):
    print("Aprovado! Com media", m)
else:
    ex = int(input("Entre com o valor da nota do exame: "))
    nm = (m+ex)/2 
    if(nm >= 5.0):
        print("Aprovado! Com media", nm)
    else:
        print("Reprovado! Com media", nm)