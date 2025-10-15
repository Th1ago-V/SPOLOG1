S = float(input("Insira o salário bruto: "))

if(S == 0):
    print("Programa encerrado")
else:
    H = int(input("Entre com as horas trabalhadas no mês: "))
    F = int(input("Entre com a quantidade de funcionarioS: "))
    if(S < 800.00 and H <= 160):
        print("O salário dos", F, "funcionários é", S)
    elif(S < 800.00 and H > 160):
        S = S + (3/2)*(S/160)*(H-160)
        print("O salário dos", F, "funcionários é", S)
    elif(S >= 800.00 and S <= 1600.00  and H <= 160):
        S = S - S * (8/100) - S * (5/100)
        print("O salário dos", F, "funcionários é", S)
    elif(S >= 800.00 and S <= 1600.00  and H > 160):
        S = S + (3/2)*(S/160)*(H-160)
        S = S - S * (13/100)
        print("O salário dos", F, "funcionários é", S)
    elif(S > 1600.00 and H <= 160):
        S = S - S * (15/100) - S * (7/100)
        print("O salário dos", F, "funcionários é", S)
    elif(S > 1600.00 and H > 160):
        S = S + (3/2)*(S/160)*(H-160)
        S = S - S * (22/100)
        print("O salário dos", F, "funcionários é", S)
    else:
        print("Invalido")