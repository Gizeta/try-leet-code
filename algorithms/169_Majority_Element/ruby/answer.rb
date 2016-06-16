# @param {Integer[]} nums
# @return {Integer}
def majority_element(nums)
    nums.inject(Hash.new(0)){|h, v| h[v] += 1; h}.max_by{|k, v| v}[0]
end