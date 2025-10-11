import math
A = int(input("Entre com o valor a: "))
B = int(input("Entre com o valor b: "))
C = int(input("Entre com o valor c: "))

r1 = (-B + math.sqrt(B*B - 4*A*C))/2*A
r2 = (-B - math.sqrt(B*B - 4*A*C))/2*A

print("As raises são: ", r1, r2)