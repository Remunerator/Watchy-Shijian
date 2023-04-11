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

To convert the glyphs, I implemented [fontconvert](https://github.com/adafruit/Adafruit-GFX-Library/tree/master/fontconvert) in Python with [freetype-py](https://pypi.org/project/freetype-py/). If there's interest, I'll open-source the script.

### Modified Glyphs
| ASCII | Original | Replaced | Translation |
| - | - | - | - |
| `0x41` | A | 零 | 0 |
| `0x42` | B | 一 | 1 (lowercase) |
| `0x43` | C | 二 | 2 (lowercase) |
| `0x44` | D | 三 | 3 (lowercase) |
| `0x45` | E | 四 | 4 (lowercase) |
| `0x46` | F | 五 | 5 (lowercase) |
| `0x47` | G | 六 | 6 (lowercase) |
| `0x48` | H | 七 | 7 (lowercase) |
| `0x49` | I | 八 | 8 (lowercase) |
| `0x4A` | J | 九 | 9 (lowercase) |
| `0x4B` | K | 十 | 10 (lowercase) |
| `0x4C` | L | 壹 | 1 (uppercase) |
| `0x4D` | M | 贰 | 2 (uppercase) |
| `0x4E` | N | 叁 | 3 (uppercase) |
| `0x4F` | O | 肆 | 4 (uppercase) |
| `0x50` | P | 伍 | 5 (uppercase) |
| `0x51` | Q | 陆 | 6 (uppercase) |
| `0x52` | R | 柒 | 7 (uppercase) |
| `0x53` | S | 捌 | 8 (uppercase) |
| `0x54` | T | 玖 | 9 (uppercase) |
| `0x55` | U | 拾 | 10 (uppercase) |
| `0x56` | V | 时 | Hours |
| `0x57` | W | 分 | Minutes |
| `0x58` | X | 整 | Sharp |

## Mentions
Special thanks to [Pconti31](https://github.com/Pconti31) for his [TTF2GFX](https://github.com/Pconti31/TTF2GFX) library.
