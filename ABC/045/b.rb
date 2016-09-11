sa=gets.chomp.split("")
sb=gets.chomp.split("")
sc=gets.chomp.split("")
arr=[sa, sb, sc]
h = {"a"=>0, "b"=>1, "c"=>2}
i = 0
c = ''
while true
  t = arr[i]
  if t.empty?
    puts c.upcase
    exit
  end
  c = t.shift
  i = h[c]
end

