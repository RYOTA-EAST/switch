Dim color As String
color = Range("A1")

Select Case color
    Case "red"
        Range("B1") = "赤"
    Case "bule"
        Range("B1") = "青"
    Case "white", "black"
        Range("B1") = "パンダの色です"
    Case Else
        Range("B1") = "その他"
End Select