# @param {Integer} n
# @return {Boolean}
def is_power_of_two(n)
  !(n == 0 || n.to_s(2).chars[1..-1].any?{ |d| d == '1' })
end
