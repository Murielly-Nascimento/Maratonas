from collections import Counter

def fat(N):
  if N <= 1: return 1
  else: return fat(N-1)*N

def duplicado(str):
  temp = Counter(str)

  valor = 1
  
  for letter, count in temp.items():
    if (count > 1):
      valor *=fat(count)
  
  return valor

N = int(input());

for i in range(N):
  aux = input()
  denominador = duplicado(aux)
  numerador = fat(len(aux))
  resposta = int(numerador/denominador)
  print(resposta)