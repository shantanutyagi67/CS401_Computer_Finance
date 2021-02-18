import random
n,s = input().split(' ')
n = int(n)
s = int(s)
#print(n)
#print(s)
random.seed(s)
p = 0
for i in range(n):
    count = 0;
    for j in range(100):
        val = random.randint(0,1)
        print(val)
        if val == 0:
            count = count +1
        else:
            count = count -1
        if count >= 25:
            p = p+1
            break;
print()
print(p/n)