# @param {String} s
# @return {Boolean}
def is_palindrome(s)
  s = s.downcase.gsub(/\W/, '')
  s == s.reverse
end
