s=gets.chomp.chars.map(&:to_i)
l=s.size-1
res = 0
(2**l).times do |i|
  p = i.to_s(2).rjust(l,'0').chars.map{|j|j=='1' ? '+' : nil}
  res += eval(s.zip(p).flatten.compact.join(''))
end
puts res
