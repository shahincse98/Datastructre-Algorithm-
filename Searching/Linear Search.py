a = [int(x) for x in input().split()]
l = len(a)
item = int(input('Enter the number: '))
j = 0
c = 0

for i in range(l):
    c = c+1
    if a[i] == item:
        j += 1
        print(item, 'is found at location', c)

if j == 0:
    print(item, 'is not found')
