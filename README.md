# Borland Blue for Zed

Borland Blue is an unofficial Zed theme inspired by the blue backgrounds and
16-color palette of Borland Turbo Pascal and Turbo C.
This project is not affiliated with or endorsed by Borland or its successors.

| Variant | Editor background |
| --- | --- |
| Borland Blue — Classic | `#0000AA` |
| Borland Blue — Electric | `#0000DD` |

## Installation

Run the commands for your platform from the repository directory. Each block
backs up an existing `borland-blue.json` before replacing it.

### Windows (PowerShell)

Destination: `%APPDATA%\Zed\themes\`.

```powershell
$themeDirectory = Join-Path $env:APPDATA 'Zed\themes'
New-Item -ItemType Directory -Path $themeDirectory -Force | Out-Null
$themePath = Join-Path $themeDirectory 'borland-blue.json'
if (Test-Path -LiteralPath $themePath) {
    $backupPath = "$themePath.$(Get-Date -Format 'yyyyMMdd-HHmmss-fff').bak"
    Copy-Item -LiteralPath $themePath -Destination $backupPath
}
Copy-Item -LiteralPath '.\borland-blue.json' -Destination $themePath
```

### Linux and macOS

Destination: `~/.config/zed/themes/`.

```sh
theme_directory="$HOME/.config/zed/themes"
mkdir -p "$theme_directory"
if [ -f "$theme_directory/borland-blue.json" ]; then
    cp "$theme_directory/borland-blue.json" \
        "$theme_directory/borland-blue.json.$(date +%Y%m%d-%H%M%S).bak"
fi
cp borland-blue.json "$theme_directory/"
```

### Theme selection

1. Open **Settings → Appearance → Theme**.
2. Select **Borland Blue — Classic** or **Borland Blue — Electric**.
   In **Dynamic** theme mode, use the **Dark Theme** dropdown.

## Syntax colors

| Syntax | Color |
| --- | --- |
| Source text, variables, and function names | Yellow `#FFFF55` |
| Keywords | Bold white `#FFFFFF` |
| Types | Bold cyan `#55FFFF` |
| Fields, TOML keys, and TOML table names | Cyan `#55FFFF` |
| Strings | Cyan `#55FFFF` |
| Constants, booleans, and numbers | Magenta `#FF55FF` |
| Brackets and operators | White `#FFFFFF` |
| Comments | Green `#55FF55` |
| Markdown bold text | Bold cyan `#55FFFF` |

### Shared syntax categories

| Theme entry | Affected text |
| --- | --- |
| `property` | [C++ fields](https://github.com/zed-industries/zed/blob/e8bc16acee5ae1937600d571d441c4b5d7b0d288/crates/grammars/src/cpp/highlights.scm) and [TOML keys and table names](https://github.com/zed-extensions/toml/blob/main/languages/toml/highlights.scm) |
| `constant` | TOML booleans |

## Samples

Open these files in Zed to compare highlighting:

| File | Sample syntax |
| --- | --- |
| [highlighting.md](samples/highlighting.md) | Bold text, links, inline code, and fenced code |
| [highlighting.toml](samples/highlighting.toml) | Table names, keys, booleans, numbers, and strings |
| [highlighting.cpp](samples/highlighting.cpp) | Types, parameters, fields, and operators |

## Markdown preview

Check `markdown_preview.theme` in Zed's settings if the Markdown preview uses
a different palette from the editor. The Markdown bold color above applies
to source text.
