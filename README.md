# Shijian
A simple, no-frills Chinese watchface for [Watchy](https://watchy.sqfmi.com/). It only tells the time, so no additional settings are required.

Only the files in the `src` folder are required. The `font` folder is there if you want to customise it yourself.

The characters for the numeric hours are capitalised to fit with the aesthetic.

Most uppercase English characters are swapped out with the numerical glyphs, so to add uppercase English characters, please convert and add your own font. See the modified glyph map in the table below:
| Original | Replaced |
| - | - |
| A | 零 |
| B | 一 |
| C | 二 |
| D | 三 |
| E | 四 |
| F | 五 |
| G | 六 |
| H | 七 |
| I | 八 |
| J | 九 |
| K | 十 |
| L | 壹 |
| M | 贰 |
| N | 叁 |
| O | 肆 |
| P | 伍 |
| Q | 陆 |
| R | 柒 |
| S | 捌 |
| T | 玖 |
| U | 拾 |
| V | 时 |
| W | 分 |

Special thanks to [Pconti31](https://github.com/Pconti31) for his [TTF2GFX](https://github.com/Pconti31/TTF2GFX) library, although I found it easier to replace in bulk using [freetype-py](https://pypi.org/project/freetype-py/).
