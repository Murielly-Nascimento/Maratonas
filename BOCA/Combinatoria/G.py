def fat(N):
  if N <= 1: return 1
  else: return fat(N-1)*N

N = int(input());

for i in range(N):
  aux = int(input())
  print(fat(aux))