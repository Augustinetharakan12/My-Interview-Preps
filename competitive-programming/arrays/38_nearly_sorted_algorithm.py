#code
t = int(input())

while t:

    inputs = input().split()

    n, k = int(inputs[0]), int(inputs[1])

    li = [int(i) for i in input().split()]

    li_result = [None for i in range(n)]

    for index, num in enumerate(li):
        ll = (index - k) if (index - k > 0) else 0
        ul = (index + k) if (index + k < n-1) else n-1

        # print(ll, ul)

        count_of_numbers_less_than_num = 0

        # print(li[ll:ul+1], li_result)

        for i in li[ll:ul+1]:
            if(i < num): count_of_numbers_less_than_num += 1

        while (li_result[ll + count_of_numbers_less_than_num] is not None):
            ll += 1

        # print(ll+count_of_numbers_less_than_num)

        li_result[ll+count_of_numbers_less_than_num] = num

    for i in li_result:
        print(i, end=" ")
    print("")
    t -= 1
