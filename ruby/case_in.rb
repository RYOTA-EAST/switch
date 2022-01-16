color = "black"

print(color.class)

# case color
#   in "red" then print "赤"
#   in "blue" then print "青"
#   in "black", word then print "パンダの色#{word}"
#   else print ("その他")
# end

case color
  in "red" then print "赤"
  in "blue" then print "青"
  in "black" | "white" then print "パンダの色"
  else print ("その他")
end

# 出力：パンダの色