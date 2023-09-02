def count_mines(field, i, j):
    count = 0
    for x in range(i-1, i+2):
        for y in range(j-1, j+2):
            if x >= 0 and x < len(field) and y >= 0 and y < len(field[0]) and field[x][y] == '*':
                count += 1
    return count

# read input
field_num = 1
while True:
    n, m = map(int, input().split())
    if n == 0 and m == 0:
        break

    field = []
    for i in range(n):
        row = input().strip()
        field.append(row)

    # process field
    output = []
    for i in range(n):
        line = ''
        for j in range(m):
            if field[i][j] == '*':
                line += '*'
            else:
                line += str(count_mines(field, i, j))
        output.append(line)

    # output field
    if field_num > 1:
        print('')
    print('Field #%d:' % field_num)
    for line in output:
        print(line)

    field_num += 1