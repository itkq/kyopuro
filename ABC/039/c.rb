wb = %w(W B W B W W B W B W B W)
x = %w(Do Do Re Re Mi Fa Fa So So La La Si)

puts x[(wb*3).join.index(gets.chomp) % wb.size]
