N = float(input("Entre com a nota: "))
D = int(N)
S = N - D

if(S > 0.5):
    print("A nota arrendoda é ", D + 1)
else:
    print("A nota arrendoda é ", D)