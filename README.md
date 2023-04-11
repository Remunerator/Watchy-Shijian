# Shijian for Watchy

![Shijian screenshot](/screenshot/Shijian.gif?raw=true)

## About
**Shijian** (时间) is a simple aesthetic Chinese watchface for [Watchy](https://watchy.sqfmi.com/). It was modified from [Stationary Text](https://github.com/BraininaBowl/Stationary-Text-for-Watchy).

* It only tells the time, so no additional settings are required.
* The characters for the hour are in uppercase (大写) to fit with the style.
* Only the files in the `src` folder are required for deployment.

## Customisation
Modifying the logic is very simple:
* To switch numbers between uppercase and lowercase, just replace `uc` in the array names with `lc` or vice versa.
* To use light mode, just swap all instances of `GxEPD_WHITE` with `GxEPD_BLACK`.

Modifying the glyphs is pretty complicated:
* All fonts are in the `font` folder.
* Most uppercase English letters were replaced with Chinese glyphs during the conversion to GFX.
* If you need those uppercase characters back, you'll need to convert the fonts yourself.

To convert the glyphs, I implemented [fontconvert](https://github.com/adafruit/Adafruit-GFX-Library/tree/master/fontconvert) in Python with [freetype-py](https://pypi.org/project/freetype-py/). If there's interest, I'll make this script open-source.

Modified glyphs:
| Original | Replaced | Unicode |
| - | - | - |
| A | 零 | `0x41` |
| B | 一 | `0x42` |
| C | 二 | `0x43` |
| D | 三 | `0x44` |
| E | 四 | `0x45` |
| F | 五 | `0x46` |
| G | 六 | `0x47` |
| H | 七 | `0x48` |
| I | 八 | `0x49` |
| J | 九 | `0x4A` |
| K | 十 | `0x4B` |
| L | 壹 | `0x4C` |
| M | 贰 | `0x4D` |
| N | 叁 | `0x4E` |
| O | 肆 | `0x4F` |
| P | 伍 | `0x50` |
| Q | 陆 | `0x51` |
| R | 柒 | `0x52` |
| S | 捌 | `0x53` |
| T | 玖 | `0x54` |
| U | 拾 | `0x55` |
| V | 时 | `0x56` |
| W | 分 | `0x57` |
| X | 整 | `0x58` |

## Mentions
Special thanks to [Pconti31](https://github.com/Pconti31) for his [TTF2GFX](https://github.com/Pconti31/TTF2GFX) library.
