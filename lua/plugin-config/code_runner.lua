require('code_runner').setup {
  term = {
    position = "belowright",
    size = 8,
  },
  filetype = {
    java = "cd $dir && javac $fileName && java $fileNameWithoutExt",
    python = "python -i $fileName",
    typescript = "deno run",
    cpp = "cd $dir && g++ $fileName -std=c++11 -Wall -o $fileNameWithoutExt && ./$fileNameWithoutExt",
    rust = "cd $dir && rustc $fileName && $dir/$fileNameWithoutExt",
  },
}
