class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table = {} # �j�A��: table[num] ����������
        for num in nums: # �C�ӼƦr���@��
            if num in table: # �X�{�L����
                table[num] += 1 # ����+1
            else:
                table[num] = 1 # ��1���X�{
        #print(table) # �����٨S�X��

        ans = 0
        for num in table: # ��table�̥������Ʀ���1��
            if table[num] ==2: # �p�G�Ʀr��n�X�{2��
                ans = ans ^ num # �⵪��,���D�حn�DXOR�V�_��
        return ans
