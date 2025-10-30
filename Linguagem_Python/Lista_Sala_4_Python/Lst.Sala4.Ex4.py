A = []
B = []
C = []

for i in range(5):
    A.append(int(input("Entre com um valor para A: ")))
for i in range(5):
    B.append(int(input("Entre com um valor para B: ")))
C.append(A)
C.append(B)

print("O vetor C é:", C)