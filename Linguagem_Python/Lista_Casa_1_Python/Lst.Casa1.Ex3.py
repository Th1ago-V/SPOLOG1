AP = float(input("Entre com a altura da parede: "))
LP = float(input("Entre com a largura da parede: "))
AA = float(input("Entre com a  altura do azulejo: "))
LA = float(input("Entre com a  largura do azulejo: "))
AN = (AP * LP)/(AA * LA)

print("É preciso ", AN, "azulejos para cobrir a parede")