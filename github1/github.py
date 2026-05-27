#파이썬 수행평가 준비

a=[[1 if i == j or i + j == 4 else 0 for j in range(5)]for i in range(5)]
for row in a:
  print(row)
# 대각선 위치(i==j 또는 i+j==4)만 1, 나머지는 0으로 5x5 행렬 생성
# for row in a: print(row)  생성된 행렬을 한 줄씩 꺼내어 'X'자 모양으로 출력

total = 0
for i in range(1, 6):
  total += i
print(total)
# range(1,6)은 1,2,3,4,5를 순서대로 반환하며,이들의 합은 15가 됩니다.

count = 0
for i in range(2):
  for j in range(3):
    count += 1
print(count)
# 바깥쪽 루프가 2번 실행될때마다 안쪽 루프가 총3번씩 실행되므로 2*3=6번 실행됩니다.

for i in range(3):
    for j in range(i + 1):
        print('*', end='')
    print()
# i가 0일때 1개, 1일때 2개, 2일때 3개의 별이 출력되며 줄바꿈이 일어납니다.

result = 0
for i in range(1, 5):
    if i % 2 == 0:
        result += i * 2
    else:
        result -= i
print(result)
# i가 1일때 -1,2일 때 +4,3일때 -3,4일때 +8이 되므로 총합은 -1+4-3=8이 됩니다.

