" 基础设置
lua require('basic')
" 快捷键映射
lua require('keybindings')
" Packer插件管理
lua require('plugins')
" 皮肤设置
colorscheme nord
" 插件配置
lua require('plugin-config/nvim-tree')
lua require('plugin-config/nvim-treesitter')
lua require('plugin-config/nord')
lua require('plugin-config/lualine')
lua require('plugin-config/code_runner')
lua require('lsp/setup')
lua require('lsp/nvim-cmp')
lua require('plugin-config/Comment')
lua require('plugin-config/nvim-autopairs')
lua require('plugin-config/telescope')
lua require('plugin-config/bufferline')
lua require('plugin-config/toggleterm')
" 复制到windows剪贴板
set clipboard=unnamedplus
