# @param {Integer} num
# @return {Integer}
def add_digits(num)
  num = num.to_s.chars.map(&:to_i).reduce(&:+) while num > 9
  num
end
