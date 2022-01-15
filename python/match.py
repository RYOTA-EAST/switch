color = "black"

match color:
    case "red":
        print("赤")
    case "blue":
        print("青")
    case "black" | "white":
        print("パンダの色")
    case _:
        print("その他")