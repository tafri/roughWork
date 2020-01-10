def palindrome_count(lower=False, upper=False, a=[], b=[]):
    if lower:
        len_lower = len(a) - 1
        for i, place in enumerate(a):
            if a[len_lower-i] > a[i]:
                a[len_lower-i-1] += 1
            a[len_lower - i] = a[i]
        if len(a)%2:
            len_lower = len(a)//2
        else:
            len_lower = len(a) // 2 - 1
            
        a_lower = len_lower
        from_lower = (10 - a[len_lower]) * 10**(a_lower-len_lower)
        len_lower -= 1
        while len_lower >= 0:
            from_lower += (10 - (a[len_lower]+1)) * 10**(a_lower-len_lower)
            len_lower -= 1


    if upper:
        len_upper = len(b) - 1
        for i, place in enumerate(b):
            if b[len_upper-i] < b[i]:
                b[len_upper-i-1] -= 1
            b[len_upper - i] = b[i]
        if len(b)%2:
            len_upper = len(b)//2
        else:
            len_upper = len(b) // 2 - 1

        b_upper = len_upper
        from_upper = (10 - b[len_upper]) * 10**(b_upper-len_upper)
        len_upper -= 1
        while len_upper >= 0:
            from_upper += (10 - (b[len_upper]+1)) * 10**(b_upper-len_upper)
            len_upper -= 1
    else:
        from_upper = 1

    try:
        return (from_lower - from_upper + 1)
    except BaseException as be:
        raise be

#----------------------------------------------------------------------------------#

def main():
    a_lower = int(input())
    b_upper = int(input())
    lower = a_lower if a_lower<b_upper else b_upper
    upper = b_upper if b_upper > a_lower else a_lower
    if lower < 10 and upper < 10:
        total_sum = upper - lower + 1
        print_lower = lower
    elif lower < 10:
        total_sum = (10 - lower)
        print_lower = lower
        lower = 10
    else:
        total_sum = 0
    a_lower, b_upper = list(), list()
    lower_temp, upper_temp = lower, upper

    while lower_temp:
        a_lower.insert(0, lower_temp%10)
        lower_temp //= 10

    while upper_temp:
        b_upper.insert(0, upper_temp%10)
        upper_temp //= 10

    if len(a_lower) < len(b_upper):
        for i in range(len(a_lower), len(b_upper)):
            total_sum += palindrome_count(lower=True, a=a_lower)
            a_lower = str(10 ** (i))
            a_lower = list(map(int, a_lower))

        total_sum += palindrome_count(lower=True, upper=True, a=a_lower, b=b_upper)
    elif upper > 9:
        total_sum += palindrome_count(lower=True, upper=True, a=a_lower, b=b_upper)

    print("-"*10)
    print("Total number of palindromic numbers between", print_lower, "and", upper, "are:", total_sum)

#----------------------------------------------------------------------------------#

if __name__ == "__main__":
    main()
