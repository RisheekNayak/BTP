def solve(input1):
  s = input()
  def_code = code[s]
  lines = def_code.splitlines()
  for i in range(len(lines)):
      if(input_var[s] in lines[i]):
          lines[i] = lines[i].replace(input_var[i],input1)


code = {}
code["relu"] = ""
code["adderstage2"] = ""
code["Resnet"] = ""
code["sigmoid"] = ""
code["tanH"] = ""
code["Midas"] = ""
code["DenseNet"] = ""
code["CNN"] = ""


input_var = {}
input_var["relu"] = "din_relu"
input_var["adderstage2"] =
input_var["Resnet"] = "data_in"
input_var["sigmoid"] = "x"
input_var["tanH"] = "phase"
input_var["Midas"] = "data_in"
input_var["DenseNet"] = "input_data"
input_var["CNN"] = "rst"

output_var = {}
output_var["relu"] = "dout_relu"
output_var["Resnet"] = "data_out"
output_var["sigmoid"] = "out"
output_var["tanH"] = "tanh"
output_var["Midas"] = "data_out"
output_var["DenseNet"] = "output_data"
output_var["CNN"] = "numberOfTimes_PatterDetected"