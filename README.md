# Shijian for Watchy

![Shijian screenshot](/screenshot/Shijian.gif?raw=true)

## About
**Shijian** is a simple, no-frills Chinese watchface for [Watchy](https://watchy.sqfmi.com/). It was modified from [Stationary Text](https://github.com/BraininaBowl/Stationary-Text-for-Watchy).

* It only tells the time, so no additional settings are required.
* The characters for the numeric hours are capitalised to fit with the aesthetic.
* Only the files in the `src` folder are required.

## Customisation
* The `font` folder is there if you want to customise this watchface.
* If you want to use the lowercase numbers, just change all `uc` arrays to `lc` arrays.
* Most uppercase English characters are swapped out with the numerical glyphs. To add uppercase English characters, please re-convert the font with the glyphs you need.

See the modified glyph map in the table below:
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
| X | 整 |

Special thanks to [Pconti31](https://github.com/Pconti31) for his [TTF2GFX](https://github.com/Pconti31/TTF2GFX) library, although I found it easier to replace glyphs in bulk using [freetype-py](https://pypi.org/project/freetype-py/).

## Notes
If you wish to submit a PR or issue, you are most welcome, but please keep it in English.
