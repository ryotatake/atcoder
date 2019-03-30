# TLE
n, q = gets.split(" ").map(&:to_i)
s = gets.chomp
hash = {}

s.each_char do |char|
  if char == "0"
    next
  end
  i = 0

  while i < n do
    if char == s[i]
      hash[char] ||= []
      hash[char] << i
      s[i] = "0"
    end
    i += 1
  end
end

ary = Array.new(n, 1)

q.times do
  t, d = gets.chomp.split(" ")
  unless hash[t]
    next
  end

  case d
  when "L"
    hash[t].each do |i|
      if i == 0
        ary[i] = 0
      else
        tmp = ary[i]
        ary[i] = 0
        ary[i - 1] += tmp
      end
    end
  when "R"
    hash[t].reverse_each do |i|
      if i == n - 1
        ary[i] = 0
      else
        tmp = ary[i]
        ary[i] = 0
        ary[i + 1] += tmp
      end
    end
  end
end

p ary.inject(:+)
