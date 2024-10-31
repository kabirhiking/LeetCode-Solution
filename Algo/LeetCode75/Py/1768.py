class Solution(object):
    def mergeAlternately(self, word1, word2):
        i = 0
        j = 0
        merged = []
        w1 = len(word1)
        w2 = len(word2)


        while i < w1 and j < w2 :
            merged.append(word1[i])
            merged.append(word2[j])
            i += 1
            j += 1


        merged.extend(word1[i:])
        merged.extend(word2[i:])

        return ''.join(merged)

word1 = "abc"
word2 = "pqrst"

print(Solution().mergeAlternately(word1, word2))