N = int(input("Insira um número menor ou igual  a  50: "))
check = N * 3

if (N > 50):
    print("Número inválido")
else:
    while check < 250:
        N = N * 3
        check = check * 3
    print("O número final é", N)