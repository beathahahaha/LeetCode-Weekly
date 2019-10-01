def merge_sort(num):
    if len(num) <= 1:
        return num
    l = len(num)
    n = l // 2
    m = l - n
    num1 = merge_sort(num[0:m])
    num2 = merge_sort(num[m:l])
    i, j = 0, 0
    for k in range(l):
        if num1[i] <= num2[j]:
            num[k] = num1[i]
            i += 1
        else:
            num[k] = num2[j]
            j += 1
        if (i == m) and (j < n):
            num[k + 1:] = num2[j:l]
            break
        elif (i < m) and (j == n):
            num[k + 1:] = num1[i:m]
            break
    return num


class Solution:
    def merge(self, nums1: list, m: int, nums2: list, n: int):
        """
        Do not return anything, modify nums1 in-place instead.
        """
#        n1 = merge_sort(nums1[0:m])
#        n2 = merge_sort(nums2)
        n1=nums1[0:m]
        n2=nums2
        if (m == 0) or (n == 0):
            nums1[:] = n1 + n2
        else:
            i, j = 0, 0
            l=m+n
            for k in range(l):
                if n1[i] <= n2[j]:
                    nums1[k] = n1[i]
                    i += 1
                else:
                    nums1[k] = n2[j]
                    j += 1
                if (i == m) and (j < n):
                    nums1[k + 1:] = n2[j:l]
                    break
                elif (i < m) and (j == n):
                    nums1[k + 1:] = n1[i:m]
                    break

