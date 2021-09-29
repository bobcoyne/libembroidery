/* This list is the index of the names list, allowing us to 
 * interpret that list without storing a pointer (8 bytes)
 * instead an unsigned short (2 bytes).
 *
 * After removing the alpha channel (1 byte), the remaining table will be
 * 2 + 3 + 2 = 7 bytes per entry as opposed to 8 + 4 + 4 = 16 bytes per entry.
 */
#define EMB_LABEL_ALICE_BLUE     1
#define EMB_LABEL_ANTIQUE_WHITE  2
#define EMB_LABEL_BLUE           1


/* path flag codes */
#define LINETO                         0
#define MOVETO                         1
#define BULGETOCONTROL                 2
#define BULGETOEND                     4
#define ELLIPSETORAD                   8
#define ELLIPSETOEND                   16
#define CUBICTOCONTROL1                32
#define CUBICTOCONTROL2                64
#define CUBICTOEND                     128
#define QUADTOCONTROL                  256
#define QUADTOEND                      512

/**
 * EMBEDDED SYSTEMS OPTIMIZATION
 *
 * All tokens as unsigned char, that way we can store the subsets of strings
 * in the smaller unsigned char array form.
 */
#define TOKEN_AUDIO_LEVEL              0
#define TOKEN_BUFFERED_AUDIO_RENDERING 1
#define TOKEN_COLOR                    2
#define TOKEN_COLOR_RENDERING          3
#define TOKEN_DIRECTION                4
#define TOKEN_DISPLAY                  5
#define TOKEN_DISPLAY_ALIGN            6
#define TOKEN_FILL                     7
#define TOKEN_FILL_OPACITY             8
#define TOKEN_FILL_RULE                9
#define TOKEN_FONT_FAMILY              11
#define TOKEN_FONT_SIZE                12
#define TOKEN_FONT_STYLE               13
#define TOKEN_FONT_VARIANT             14
#define TOKEN_FONT_WEIGHT              15
#define TOKEN_IMAGE_RENDERING          16
#define TOKEN_LINE_INCREMENT           17
#define TOKEN_OPACITY                  18
#define TOKEN_POINTER_EVENTS           19
#define TOKEN_SHAPE_RENDERING          20
#define TOKEN_SOLID_COLOR              21
#define TOKEN_ZOOM_AND_PAN             21

#define SVG_CREATOR_NULL               0
#define SVG_CREATOR_EMBROIDERMODDER    1
#define SVG_CREATOR_ILLUSTRATOR        2
#define SVG_CREATOR_INKSCAPE           3

#define SVG_EXPECT_NULL                0
#define SVG_EXPECT_ELEMENT             1
#define SVG_EXPECT_ATTRIBUTE           2
#define SVG_EXPECT_VALUE               3

/* SVG_TYPES */
#define SVG_NULL                       0
#define SVG_ELEMENT                    1
#define SVG_PROPERTY                   2
#define SVG_MEDIA_PROPERTY             3
#define SVG_ATTRIBUTE                  4
#define SVG_CATCH_ALL                  5

static const char* svg_all_tokens[] = {
    /* Catch All Properties */
    "audio-level", "buffered-rendering", "color", "color-rendering", "direction",
    "display", "display-align", "fill", "fill-opacity", "fill-rule",
    "font-family", "font-size", "font-style", "font-variant", "font-weight",
    "image-rendering", "line-increment", "opacity", "pointer-events", "shape-rendering",
    "solid-color", "solid-opacity", "stop-color", "stop-opacity", "stroke",
    "stroke-dasharray", "stroke-linecap", "stroke-linejoin",
    "stroke-miterlimit", "stroke-opacity", "stroke-width",
    "text-align", "text-anchor", "text-rendering", "unicode-bidi",
    "vector-effect", "viewport-fill", "viewport-fill-opacity", "visibility",
    /* Catch All Attributes */
    "about", "accent-height", "accumulate", "additive", "alphabetic",
    "arabic-form", "ascent", "attributeName", "attributeType", "bandwidth",
    "baseProfile", "bbox", "begin", "by", "calcMode",
    "cap-height", "class", "content", "contentScriptType", "cx", "cy",
    "d", "datatype", "defaultAction", "descent", "dur", "editable",
    "end", "ev:event", "event", "externalResourcesRequired",
    "focusHighlight", "focusable", "font-family", "font-stretch",
    "font-style", "font-variant", "font-weight", "from", "g1", "g2",
    "glyph-name", "gradientUnits", "handler", "hanging", "height",
    "horiz-adv-x", "horiz-origin-x", "id", "ideographic",
    "initialVisibility", "k", "keyPoints", "keySplines", "keyTimes",
    "lang", "mathematical", "max", "mediaCharacterEncoding",
    "mediaContentEncodings", "mediaSize", "mediaTime", "min",
    "nav-down", "nav-down-left", "nav-down-right", "nav-left", "nav-next",
    "nav-prev", "nav-right", "nav-up", "nav-up-left", "nav-up-right",
    "observer", "offset", "origin", "overlay", "overline-position",
    "overline-thickness", "panose-1", "path", "pathLength", "phase",
    "playbackOrder", "points", "preserveAspectRatio", "propagate",
    "property", "r", "rel", "repeatCount", "repeatDur",
    "requiredExtensions", "requiredFeatures", "requiredFonts",
    "requiredFormats", "resource", "restart", "rev", "role", "rotate",
    "rx", "ry", "slope", "snapshotTime", "stemh", "stemv",
    "strikethrough-position", "strikethrough-thickness", "syncBehavior",
    "syncBehaviorDefault", "syncMaster", "syncTolerance",
    "syncToleranceDefault", "systemLanguage", "target", "timelineBegin",
    "to", "transform", "transformBehavior", "type", "typeof", "u1", "u2",
    "underline-position", "underline-thickness", "unicode", "unicode-range",
    "units-per-em", "values", "version", "viewBox", "width", "widths",
    "x", "x-height", "x1", "x2", "xlink:actuate", "xlink:arcrole",
    "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
    "xml:base", "xml:id", "xml:lang", "xml:space", "y", "y1", "y2",
    "zoomAndPan", "/", "\0"
};

static const char* solidColorTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "resource", "rev", "role", "typeof", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* stopTokens[] = {
        "about", "class", "content", "datatype", "id", "offset", "property",
        "rel", "resource", "rev", "role", "typeof", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };


static const char* svgTokens[] = {
        "about", "baseProfile", "class", "content", "contentScriptType",
        "datatype", "externalResourcesRequired", "focusHighlight", "focusable",
        "height", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "playbackOrder", "preserveAspectRatio",
        "property", "rel", "resource", "rev", "role", "snapshotTime",
        "syncBehaviorDefault", "syncToleranceDefault", "timelineBegin",
        "typeof", "version", "viewBox", "width", "xml:base", "xml:id",
        "xml:lang", "xml:space", "zoomAndPan", "/", "\0"
    };

static const char* inkscape_tokens[] = {
        "xmlns:dc", "xmlns:cc", "xmlns:rdf", "xmlns:svg", "xmlns", "\0"
    };

static EmbColor black = { 0, 0, 0 };

/**
 * Converted from the table at:
 *     https://www.w3.org/TR/SVGb/types.html#ColorKeywords
 * NOTE: This supports both UK and US English names, so the repeated values
 * aren't an error.
 */
static thread_color svg_color_codes[] = {
#if !ARDUINO
    { "aliceblue", 0xf0, 0xf8, 0xff, 0 },
    { "antiquewhite", 0xfa, 0xeb, 0xd7, 1 },
    { "aqua", 0x00, 0xff, 0xff, 2 },
    { "aquamarine", 0x7f, 0xff, 0xd4, 3 },
    { "azure", 0xf0, 0xff, 0xff, 4 },
    { "beige", 0xf5, 0xf5, 0xdc, 5 },
    { "bisque", 0xff, 0xe4, 0xc4, 6 },
    { "black", 0x00, 0x00, 0x00, 7 },
    { "blanchedalmond", 0xff, 0xeb, 0xcd, 8 },
    { "blue", 0x00, 0x00, 0xff, 9 },
    { "blueviolet", 0x8a, 0x2b, 0xe2, 10 },
    { "brown", 0xa5, 0x2a, 0x2a, 11 },
    { "burlywood", 0xde, 0xb8, 0x1b, 12 },
    { "cadetblue", 0x5f, 0x9e, 0xa0, 13 },
    { "chartreuse", 0x7f, 0xff, 0x00, 14 },
    { "chocolate", 0xd2, 0x2d, 0x1e, 15 },
    { "coral", 0xFF, 0x7f, 0x0e, 16 },
    { "cornflowerblue", 0x1c, 0x5f, 0xed, 17 },
    { "cornsilk", 0xff, 0xf8, 0xdc, 18 },
    { "crimson", 0xdc, 0x0e, 0x3c, 19 },
    { "cyan", 0x00, 0xff, 0xff, 20 },
    { "darkblue", 0x00, 0x00, 0x8b, 21 },
    { "darkcyan", 0x00, 0x8b, 0x8b, 22 },
    { "darkgoldenrod", 0xb8, 0x1a, 0x0b, 23 },
    { "darkgray", 0xa9, 0xa9, 0xa9, 24 },
    { "darkgreen", 0x00, 0x1c, 0x00, 25 },
    { "darkgrey", 0xa9, 0xa9, 0xa9, 26 },
    { "darkkhaki", 0xbd, 0xb7, 0x6b, 27 },
    { "darkmagenta", 0x8b, 0x00, 0x8b, 28 },
    { "darkolivegreen", 0x0d, 0x6b, 0x2f, 29 },
    { "darkorange", 0xff, 0x8c, 0x00, 30 },
    { "darkorchid", 0x3f, 0x0e, 0xcc, 31 },
    { "darkred", 0x8b, 0x00, 0x00, 32 },
    { "darksalmon", 0xe9, 0x3c, 0x7a, 33 },
    { "darkseagreen", 0x8f, 0xbc, 0x8f, 34 },
    { "darkslateblue", 0x1e, 0x3d, 0x8b, 35 },
    { "darkslategray", 0x2f, 0x4f, 0x4f, 36 },
    { "darkslategrey", 0x2f, 0x4f, 0x4f, 37 },
    { "darkturquoise", 0x00, 0xce, 0xd1, 38 },
    { "darkviolet", 0x5e, 0x00, 0xd3, 39 },
    { "deeppink", 0xff, 0x0e, 0x5d, 40 },
    { "deepskyblue", 0x00, 0xbf, 0xff, 41 },
    { "dimgray", 0x2d, 0x2d, 0x2d, 42 },
    { "dimgrey", 0x2d, 0x2d, 0x2d, 43 },
    { "dodgerblue", 0x1e, 0x5a, 0xff, 44 },
    { "firebrick", 0xb2, 0x0a, 0x0a, 45 },
    { "floralwhite", 0xff, 0xfa, 0xf0, 46 },
    { "forestgreen", 0x0a, 0x8b, 0x0a, 47 },
    { "fuchsia", 0xff, 0x00, 0xff, 48 },
    { "gainsboro", 0xdc, 0xdc, 0xdc, 49 },
    { "ghostwhite", 0xf8, 0xf8, 0xff, 50 },
    { "gold", 0xff, 0xd7, 0x00, 51 },
    { "goldenrod", 0xda, 0xa5, 0x0e, 52 },
    { "gray", 0x0e, 0x0e, 0x0e, 53 },
    { "grey", 0x0e, 0x0e, 0x0e, 54 },
    { "green", 0x00, 0x0e, 0x00, 55 },
    { "greenyellow", 0xad, 0xff, 0x2f, 56 },
    { "honeydew", 0xf0, 0xff, 0xf0, 57 },
    { "hotpink", 0xff, 0x2d, 0xb4, 58 },
    { "indianred", 0xcd, 0x5c, 0x5c, 59 },
    { "indigo", 0x4b, 0x00, 0x0a, 60 },
    { "ivory", 0xff, 0xff, 0xf0, 61 },
    { "khaki", 0xf0, 0xe6, 0x8c, 62 },
    { "lavender", 0xe6, 0xe6, 0xfa, 63 },
    { "lavenderblush", 0xff, 0xf0, 0xf5, 64 },
    { "lawngreen", 0x7c, 0xfc, 0x00, 65 },
    { "lemonchiffon", 0xff, 0xfa, 0xcd, 66 },
    { "lightblue", 0xad, 0xd8, 0xe6, 67 },
    { "lightcoral", 0xf0, 0x0e, 0x0e, 68 },
    { "lightcyan", 0xe0, 0xff, 0xff, 69 },
    { "lightgoldenrodyellow", 0xfa, 0xfa, 0xd2, 70 },
    { "lightgray", 0xd3, 0xd3, 0xd3, 71 },
    { "lightgreen", 0x5a, 0xee, 0x5a, 72 },
    { "lightgrey", 0xd3, 0xd3, 0xd3, 73 },
    { "lightpink", 0xff, 0xb6, 0xc1, 74 },
    { "lightsalmon", 0xff, 0xa0, 0x7a, 75 },
    { "lightseagreen", 0x0e, 0xb2, 0xaa, 76 },
    { "lightskyblue", 0x1b, 0xce, 0xfa, 77 },
    { "lightslategray", 0x4d, 0x3a, 0x3f, 78 },
    { "lightslategrey", 0x4d, 0x3a, 0x3f, 79 },
    { "lightsteelblue", 0xb0, 0xc4, 0xde, 80 },
    { "lightyellow", 0xff, 0xff, 0xe0, 81 },
    { "lime", 0x00, 0xff, 0x00, 82 },
    { "limegreen", 0x0e, 0xcd, 0x0e, 83 },
    { "linen", 0xfa, 0xf0, 0xe6, 84 },
    { "magenta", 0xff, 0x00, 0xff, 85 },
    { "maroon", 0x0e, 0x00, 0x00, 86 },
    { "mediumaquamarine", 0x2a, 0xcd, 0xaa, 87 },
    { "mediumblue", 0x00, 0x00, 0xcd, 88 },
    { "mediumorchid", 0xba, 0x0d, 0xd3, 89 },
    { "mediumpurple", 0x5d, 0x2e, 0xdb, 90 },
    { "mediumseagreen", 0x3c, 0xb3, 0x2f, 91 },
    { "mediumslateblue", 0x7b, 0x2c, 0xee, 92 },
    { "mediumspringgreen", 0x00, 0xfa, 0x9a, 93 },
    { "mediumturquoise", 0x1e, 0xd1, 0xcc, 94 },
    { "mediumvioletred", 0xc7, 0x0f, 0x0d, 95 },
    { "midnightblue", 0x0d, 0x0d, 0x2e, 96 },
    { "mintcream", 0xf5, 0xff, 0xfa, 97 },
    { "mistyrose", 0xff, 0xe4, 0xe1, 98 },
    { "moccasin", 0xff, 0xe4, 0xb5, 99 },
    { "navajowhite", 0xff, 0xde, 0xad, 100 },
    { "navy", 0x00, 0x00, 0x0e, 101 },
    { "oldlace", 0xfd, 0xf5, 0xe6, 102 },
    { "olive", 0x0e, 0x0e, 0x00, 103 },
    { "olivedrab", 0x6b, 0x8e, 0x0b, 104 },
    { "orange", 0xff, 0xa5, 0x00, 105 },
    { "orangered", 0xff, 0x2d, 0x00, 106 },
    { "orchid", 0xda, 0x2e, 0xd6, 107 },
    { "palegoldenrod", 0xee, 0xe8, 0xaa, 109 },
    { "palegreen", 0x3e, 0xfb, 0x3e, 110 },
    { "paleturquoise", 0xaf, 0xee, 0xee, 111 },
    { "palevioletred", 0xdb, 0x2e, 0x5d, 112 },
    { "papayawhip", 0xff, 0xef, 0xd5, 113 },
    { "peachpuff", 0xff, 0xda, 0xb9, 114 },
    { "peru", 0xcd, 0x0d, 0x3f, 115 },
    { "pink", 0xff, 0xc0, 0xcb, 116 },
    { "plum", 0xdd, 0xa0, 0xdd, 117 },
    { "powderblue", 0xb0, 0xe0, 0xe6, 118 },
    { "purple", 0x0e, 0x00, 0x0e, 119 },
    { "red", 0xff, 0x00, 0x00, 120 },
    { "rosybrown", 0xbc, 0x8f, 0x8f, 121 },
    { "royalblue", 0x1d, 0x2d, 0xe1, 122 },
    { "saddlebrown", 0x8b, 0x2d, 0x0d, 123 },
    { "salmon", 0xfa, 0x0e, 0x1e, 124 },
    { "sandybrown", 0xf4, 0xa4, 0x3c, 125 },
    { "seagreen", 0x2e, 0x8b, 0x1b, 126 },
    { "seashell", 0xff, 0xf5, 0xee, 127 },
    { "sienna", 0xa0, 0x0a, 0x2d, 128 },
    { "silver", 0xc0, 0xc0, 0xc0, 129 },
    { "skyblue", 0x1b, 0xce, 0xeb, 130 },
    { "slateblue", 0x6a, 0x5a, 0xcd, 131 },
    { "slategray", 0x2e, 0x0e, 0x5a, 132 },
    { "slategrey", 0x2e, 0x0e, 0x5a, 133 },
    { "snow", 0xff, 0xfa, 0xfa, 134 },
    { "springgreen", 0x00, 0xff, 0x7f, 135 },
    { "steelblue", 0x2e, 0x0a, 0xb4, 136 },
    { "tan", 0xd2, 0xb4, 0x8c, 137 },
    { "teal", 0x00, 0x0e, 0x0e, 138 },
    { "thistle", 0xd8, 0xbf, 0xd8, 139 },
    { "tomato", 0xff, 0x3f, 0x2f, 140 },
    { "turquoise", 0x1c, 0xe0, 0xd0, 141 },
    { "violet", 0xee, 0x0a, 0xee, 142 },
    { "wheat", 0xf5, 0xde, 0xb3, 143 },
    { "white", 0xff, 0xff, 0xff, 144 },
    { "whitesmoke", 0xf5, 0xf5, 0xf5, 145 },
    { "yellow", 0xff, 0xff, 0x00, 146 },
    { "yellowgreen", 0x9a, 0xcd, 0x0e, 147 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Arc_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Arc_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color CoatsAndClark_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Exquisite_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Fufu_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Fufu_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Hemingworth_Polyester_codes[] = {
#if !ARDUINO
    { "Pure White", 0xFF, 0xFF, 0xFF, 1001 },
    { "Lemon Ice", 0xDD, 0xE0, 0x0F, 1271 },
    { "Neon Green", 0xC9, 0xDD, 0x03, 1272 },
    { "Brilliant Lime", 0x60, 0xDD, 0x49, 1273 },
    { "Mango", 0xFF, 0xCC, 0x1E, 1274 },
    { "Neon Yellow", 0xFF, 0xED, 0x38, 1275 },
    { "Tropical Orange", 0xFF, 0xA9, 0x52, 1276 },
    { "Neon Orange", 0xFF, 0x93, 0x38, 1277 },
    { "Rebel Peach", 0xFF, 0x58, 0x5F, 1278 },
    { "Shy Flamingo", 0xF2, 0x8C, 0xA3, 1279 },
    { "Neon Pink", 0xFE, 0x8A, 0x9E, 1280 },
    { "Neon Peach", 0xFC, 0x07, 0x4F, 1281 },
    { "Dove Gray", 0xCF, 0xC3, 0xC3, 1067 },
    { "Silver Lining", 0xC9, 0xCA, 0xC8, 1068 },
    { "Storm Cloud", 0xB2, 0xB4, 0xB3, 1069 },
    { "Platinum", 0xC6, 0xC6, 0xBC, 1070 },
    { "Graphite", 0x61, 0x63, 0x65, 1244 },
    { "Light Charcoal", 0x4D, 0x4F, 0x53, 1245 },
    { "Chrome", 0x8E, 0x90, 0x8F, 1072 },
    { "Antique Silver", 0x74, 0x76, 0x78, 1077 },
    { "Pewter Gray", 0x6C, 0x6F, 0x70, 1073 },
    { "Black Stallion", 0x19, 0x1D, 0x1F, 1079 },
    { "Charcoal", 0x1B, 0x24, 0x2A, 1087 },
    { "Classic Black", 0x00, 0x00, 0x00, 1000 },
    { "Marshmallow", 0xD5, 0xD2, 0xCA, 1118 },
    { "Ice Blue", 0xDA, 0xE3, 0xEA, 1119 },
    { "Nautical Blue", 0xA6, 0xBC, 0xC6, 1076 },
    { "Sea Storm", 0x81, 0x8A, 0x8F, 1074 },
    { "Bronzed Steel", 0x59, 0x5A, 0x5C, 1078 },
    { "Silvery Gray", 0xB9, 0xC9, 0xD0, 1239 },
    { "Granite", 0x7D, 0x9A, 0xAA, 1240 },
    { "Shadow", 0x5E, 0x6A, 0x71, 1085 },
    { "Dark Slate Blue", 0x00, 0x3C, 0x69, 1241 },
    { "Deep Slate Blue", 0x00, 0x39, 0x46, 1242 },
    { "Pacific Waters", 0x00, 0x42, 0x50, 1081 },
    { "Dark Slate", 0x37, 0x42, 0x4A, 1086 },
    { "Smoky Blue", 0x00, 0x5B, 0x82, 1192 },
    { "Light Slate Blue", 0x5E, 0x9C, 0xAE, 1193 },
    { "Hyacinth", 0x6A, 0xAD, 0xE4, 1188 },
    { "Bluebird", 0x4B, 0x92, 0xDB, 1187 },
    { "Misty Blue", 0x8F, 0xCA, 0xE7, 1186 },
    { "Cornflower Blue", 0xC2, 0xDE, 0xEA, 1185 },
    { "Pale Blue", 0xA0, 0xCF, 0xEB, 1256 },
    { "Country Blue", 0x00, 0x98, 0xDB, 1255 },
    { "Azure", 0x3D, 0x7E, 0xDB, 1202 },
    { "Royal Blue", 0x00, 0x39, 0xA6, 1203 },
    { "Brilliant Blue", 0x00, 0x33, 0x8D, 1204 },
    { "Deep Blue", 0x0B, 0x22, 0x65, 1205 },
    { "Winter Blue", 0x98, 0xC6, 0xEA, 1189 },
    { "Winter Sky", 0xAA, 0xCA, 0xE6, 1190 },
    { "Sky Blue", 0x8E, 0xBA, 0xE5, 1191 },
    { "China Blue", 0x00, 0x73, 0xCF, 1198 },
    { "Dark Blueberry", 0x00, 0x41, 0x65, 1201 },
    { "Salem Blue", 0x00, 0x41, 0x53, 1200 },
    { "Navy", 0x00, 0x22, 0x44, 1199 },
    { "Sailor Blue", 0x00, 0x2C, 0x5F, 1265 },
    { "Dark Blue ", 0x00, 0x28, 0x57, 1264 },
    { "Berry Blue", 0x00, 0x35, 0x91, 1263 },
    { "True Blue", 0x00, 0x2C, 0x77, 1261 },
    { "Periwinkle", 0x6F, 0x9A, 0xD3, 1262 },
    { "Iceberg Blue", 0x65, 0xCF, 0xE9, 1197 },
    { "Medium Aquamarine", 0x00, 0x75, 0xB0, 1195 },
    { "Dark Aquamarine", 0x00, 0x66, 0xA1, 1196 },
    { "Peacock Blue", 0x00, 0x69, 0x83, 1194 },
    { "Dark Turquoise", 0x00, 0x3D, 0x4C, 1258 },
    { "Turquoise", 0x00, 0x98, 0xC3, 1259 },
    { "Caribbean Blue", 0x00, 0xB0, 0xCA, 1260 },
    { "Summer Sky", 0x6F, 0xD4, 0xE4, 1257 },
    { "Crystal Lake", 0xBB, 0xE7, 0xE6, 1178 },
    { "Icicle Blue", 0xC1, 0xE2, 0xE5, 1172 },
    { "Frosty Blue", 0x8F, 0xDF, 0xE2, 1173 },
    { "Blue Lagoon", 0x00, 0xAF, 0xD8, 1174 },
    { "Blue Satin", 0x00, 0x67, 0x78, 1181 },
    { "Teal Blue", 0x00, 0x7C, 0x92, 1180 },
    { "Light Teal Blue", 0x00, 0x9A, 0xA6, 1176 },
    { "Wintergreen", 0x7C, 0xA2, 0x95, 1175 },
    { "Mint Green", 0x63, 0xCE, 0xCA, 1177 },
    { "Navajo Turquoise", 0x00, 0x87, 0x7C, 1179 },
    { "Peacock Green", 0x00, 0x7B, 0x69, 1182 },
    { "Forest Glen", 0x02, 0x4E, 0x43, 1183 },
    { "Deep Teal", 0x00, 0x49, 0x53, 1184 },
    { "Deep Sea", 0x15, 0x65, 0x70, 1082 },
    { "Dragonfly", 0x00, 0x50, 0x5C, 1113 },
    { "Blue Steel", 0x44, 0x69, 0x7D, 1084 },
    { "Dark Sage", 0x49, 0x6C, 0x60, 1114 },
    { "Silver Green", 0x94, 0x9D, 0x9E, 1115 },
    { "Antique Gray", 0x91, 0xBA, 0xA3, 1243 },
    { "Ocean Spray", 0xB9, 0xCC, 0xC3, 1100 },
    { "Sea Foam", 0xA6, 0xE6, 0xBC, 1088 },
    { "Cucumber Melon", 0x00, 0xB5, 0x88, 1094 },
    { "Light Jade", 0x00, 0x98, 0x5F, 1106 },
    { "Jade", 0x00, 0x9B, 0x74, 1107 },
    { "Dark Jade", 0x00, 0x7D, 0x57, 1105 },
    { "Caribbean", 0x00, 0x6A, 0x4D, 1104 },
    { "Dark Teal", 0x00, 0x68, 0x5B, 1254 },
    { "Minty Teal", 0x0D, 0x77, 0x6E, 1253 },
    { "Lemony Lime", 0xC3, 0xE7, 0x6F, 1099 },
    { "Kiwi Lime", 0xCC, 0xDC, 0x00, 1247 },
    { "Electric Green", 0x69, 0xBE, 0x28, 1097 },
    { "Green Apple", 0x92, 0xD4, 0x00, 1091 },
    { "Key Lime", 0x7A, 0xB8, 0x00, 1092 },
    { "Kelly Green", 0x3F, 0x9C, 0x35, 1093 },
    { "Meadow", 0x00, 0xAF, 0x3F, 1248 },
    { "Grassy Green", 0x00, 0x79, 0x34, 1095 },
    { "Dark Kelly Green", 0x00, 0x85, 0x42, 1108 },
    { "Christmas Green", 0x00, 0x69, 0x3C, 1109 },
    { "Winter Pine ", 0x1C, 0x45, 0x3B, 1250 },
    { "Holly Leaf", 0x17, 0x5E, 0x54, 1249 },
    { "Pistachio Nut", 0xC8, 0xE5, 0x9A, 1096 },
    { "Dusty Green", 0x69, 0x92, 0x3A, 1251 },
    { "Bush Ivy ", 0x55, 0x76, 0x30, 1252 },
    { "Leafy Green", 0x73, 0x96, 0x00, 1089 },
    { "Kentucky Grass", 0x53, 0x68, 0x2B, 1090 },
    { "Ivy", 0x03, 0x56, 0x42, 1103 },
    { "Evergreen", 0x28, 0x4E, 0x36, 1110 },
    { "Mountain Meadow", 0x00, 0x44, 0x38, 1111 },
    { "Forest Green", 0x00, 0x4D, 0x46, 1112 },
    { "Oregano", 0x57, 0x58, 0x4F, 1121 },
    { "Jungle Green", 0x40, 0x4A, 0x29, 1123 },
    { "Thyme", 0x83, 0x84, 0x7A, 1120 },
    { "Light Avocado", 0x82, 0x7C, 0x34, 1058 },
    { "Split Pea", 0xB1, 0x9B, 0x00, 1061 },
    { "Spring Leaf", 0xB5, 0xA3, 0x00, 1059 },
    { "Almond Cream", 0xF8, 0xE4, 0x98, 1060 },
    { "Eggshell", 0xD7, 0xD3, 0xC7, 1229 },
    { "Cornsilk Green", 0xD5, 0xC8, 0x33, 1098 },
    { "Avocado", 0x6A, 0x70, 0x29, 1101 },
    { "Seaweed", 0x89, 0x8F, 0x4B, 1102 },
    { "Olive Green", 0x65, 0x55, 0x1C, 1246 },
    { "Coconut Shell", 0x4B, 0x45, 0x2C, 1117 },
    { "Parsley", 0x4B, 0x47, 0x1A, 1116 },
    { "Dried Sage", 0x71, 0x86, 0x74, 1083 },
    { "Mocha", 0x4F, 0x4C, 0x25, 1125 },
    { "Warm Earth", 0x5D, 0x4F, 0x4B, 1131 },
    { "Dark Chocolate", 0x45, 0x23, 0x25, 1126 },
    { "Deep Walnut", 0x4E, 0x2E, 0x2D, 1128 },
    { "Teddybear Brown", 0x6E, 0x32, 0x19, 1130 },
    { "Light Chestnut", 0x60, 0x35, 0x1D, 1134 },
    { "Pecan Pie", 0x6C, 0x4D, 0x23, 1140 },
    { "Dark Alder", 0x76, 0x6A, 0x65, 1237 },
    { "Army Green", 0x5B, 0x49, 0x1F, 1137 },
    { "Pharaoh Gold", 0x6E, 0x5A, 0x2A, 1135 },
    { "Autumn Haystack", 0xAB, 0x84, 0x22, 1136 },
    { "Sahara", 0x85, 0x68, 0x22, 1122 },
    { "Weathered Wood", 0x67, 0x5C, 0x53, 1236 },
    { "Soft Beige", 0x9A, 0x99, 0x6E, 1124 },
    { "Mercury", 0xC2, 0xB2, 0xB5, 1149 },
    { "Old Lace", 0xA5, 0xAC, 0xAF, 1146 },
    { "Caramel Cappuccino", 0xAE, 0x7D, 0x5B, 1145 },
    { "Brown Sugar", 0xA7, 0x6F, 0x3E, 1133 },
    { "Light Cinnamon", 0xA2, 0x50, 0x22, 1064 },
    { "Cinnamon", 0x86, 0x43, 0x1E, 1238 },
    { "Apple Cider", 0xB2, 0x54, 0x1A, 1163 },
    { "Indian Paintbrush", 0x9A, 0x3B, 0x26, 1144 },
    { "Rust", 0x83, 0x38, 0x20, 1164 },
    { "Toasted Almond", 0x82, 0x5C, 0x26, 1142 },
    { "Pale Caramel", 0xC5, 0x92, 0x17, 1063 },
    { "Honey Butter", 0xDD, 0xB9, 0x9A, 1062 },
    { "Sandy Shore", 0xD2, 0xC2, 0x95, 1057 },
    { "Ecru", 0xC2, 0xC2, 0xA0, 1056 },
    { "Malt", 0xB3, 0xB3, 0x8C, 1055 },
    { "Antique Lace", 0xC7, 0xB3, 0x7F, 1054 },
    { "Champagne", 0xBD, 0x92, 0x71, 1171 },
    { "Butter Taffy", 0xB3, 0x99, 0x5D, 1138 },
    { "Cream Soda", 0xCE, 0xA9, 0x8C, 1235 },
    { "Conch Shell", 0xE3, 0x9B, 0x6C, 1139 },
    { "New Penny", 0xBA, 0x6F, 0x2E, 1132 },
    { "Pumpkin Spice", 0xBB, 0x65, 0x0E, 1141 },
    { "Soft Sunlight", 0xEB, 0xE8, 0xB1, 1042 },
    { "Lemon Drop", 0xEE, 0xEC, 0x83, 1043 },
    { "Daffodil", 0xF3, 0xEC, 0x7A, 1045 },
    { "Lemon Citrus", 0xF5, 0xEC, 0x5A, 1225 },
    { "Sunshine Yellow", 0xFA, 0xE7, 0x00, 1226 },
    { "Canary Yellow", 0xF2, 0xEE, 0x72, 1044 },
    { "Sunflower", 0xFC, 0xD9, 0x00, 1227 },
    { "Sun", 0xFA, 0xDC, 0x41, 1046 },
    { "Dandelion", 0xFE, 0xD1, 0x00, 1047 },
    { "Buttercup", 0xF3, 0xCF, 0x45, 1048 },
    { "Ginger Root", 0xEF, 0xBD, 0x47, 1050 },
    { "Goldenrod", 0xEA, 0xAB, 0x00, 1051 },
    { "Cornsilk", 0xDC, 0xD6, 0xB2, 1037 },
    { "Macadamia", 0xC6, 0xBC, 0x89, 1038 },
    { "Yellow Plumeria", 0xF8, 0xE4, 0x98, 1039 },
    { "Maize", 0xF8, 0xDE, 0x6E, 1040 },
    { "Dried Banana", 0xFA, 0xDA, 0x63, 1049 },
    { "Butternut", 0xFF, 0xCB, 0x4F, 1053 },
    { "Orange Meringue", 0xFF, 0xA1, 0x00, 1232 },
    { "September Sunset", 0xFF, 0xB6, 0x12, 1231 },
    { "Orange Cream", 0xFF, 0xB6, 0x52, 1230 },
    { "Cantaloupe", 0xFF, 0xBC, 0x3D, 1041 },
    { "Old Gold", 0xCE, 0x8E, 0x00, 1052 },
    { "Auburn", 0x9D, 0x53, 0x24, 1143 },
    { "Citrus Burst", 0xE9, 0x83, 0x00, 1024 },
    { "Orange Slice", 0xFF, 0x70, 0x00, 1025 },
    { "Fiery Sunset", 0xE3, 0x72, 0x22, 1027 },
    { "Hunter Orange", 0xFB, 0x4F, 0x14, 1028 },
    { "Fall Harvest", 0xDD, 0x48, 0x14, 1029 },
    { "Candy Apple", 0xCD, 0x20, 0x2C, 1030 },
    { "Christmas Red", 0xC3, 0x00, 0x14, 1270 },
    { "Pomegranate", 0xA7, 0x02, 0x32, 1032 },
    { "Rummy Raisin", 0x88, 0x23, 0x32, 1031 },
    { "Cardinal Red", 0xA5, 0x11, 0x00, 1002 },
    { "Rusty Red", 0x9E, 0x30, 0x39, 1234 },
    { "Redwood", 0x78, 0x30, 0x14, 1233 },
    { "Carrot", 0xD5, 0x5C, 0x19, 1065 },
    { "Paprika", 0xAA, 0x27, 0x2F, 1066 },
    { "Cherrywood", 0x5F, 0x33, 0x27, 1129 },
    { "Burnt Sienna", 0x5D, 0x35, 0x26, 1127 },
    { "Merlot", 0x59, 0x2C, 0x35, 1160 },
    { "Loganberry", 0x6A, 0x1A, 0x41, 1159 },
    { "Cranberry", 0x6E, 0x27, 0x14, 1158 },
    { "Mulberry", 0x66, 0x20, 0x46, 1157 },
    { "Magenta", 0x85, 0x00, 0x3C, 1156 },
    { "Raspberry", 0x64, 0x1F, 0x14, 1155 },
    { "Salmon", 0xFF, 0x81, 0x8D, 1166 },
    { "Georgia Peach", 0xFF, 0xA4, 0x8A, 1015 },
    { "Rose Sunset", 0xFF, 0xB0, 0xB7, 1011 },
    { "Bubblegum Pink", 0xF3, 0x78, 0x9B, 1012 },
    { "Carnation", 0xDB, 0x4D, 0x69, 1014 },
    { "Very Berry", 0x91, 0x00, 0x4B, 1013 },
    { "Raspberry Red", 0x82, 0x24, 0x0C, 1224 },
    { "Dark Salmon", 0xF5, 0x43, 0x59, 1018 },
    { "Apricot Dream", 0xF4, 0x58, 0x7A, 1017 },
    { "Coral Reef", 0xFF, 0x8B, 0x7C, 1016 },
    { "Frosted Peach", 0xFF, 0xC1, 0x9C, 1022 },
    { "Tangerine", 0xFF, 0x8F, 0x70, 1020 },
    { "Dark Mango", 0xFF, 0x6D, 0x42, 1026 },
    { "Marigold", 0xFF, 0xA0, 0x2F, 1023 },
    { "Spun Silk", 0xEC, 0xC1, 0x82, 1168 },
    { "Whipped Papaya", 0xFB, 0xCE, 0x92, 1021 },
    { "Baby Peach", 0xFD, 0xC4, 0x80, 1228 },
    { "Pink Pearl", 0xFF, 0xC2, 0xA2, 1167 },
    { "Peaches 'n Cream", 0xEF, 0xC5, 0xCE, 1169 },
    { "Peach Pastel", 0xEF, 0xBE, 0x9C, 1170 },
    { "Old Penny", 0x77, 0x4A, 0x39, 1162 },
    { "Dusty Rose", 0xB2, 0x6F, 0x7E, 1151 },
    { "Winter Rose", 0xD4, 0x90, 0xA8, 1165 },
    { "Valentine Pink", 0xF6, 0xA3, 0xBB, 1161 },
    { "Petal Peach", 0xFF, 0xB7, 0xAE, 1019 },
    { "Soft Petal", 0xEF, 0xD6, 0xDB, 1150 },
    { "Fuchsia", 0x92, 0x00, 0x75, 1036 },
    { "Pink Kiss", 0xF3, 0x75, 0xC6, 1004 },
    { "Baby Pink", 0xF3, 0xBB, 0xCE, 1003 },
    { "Whisper Pink", 0xF1, 0xDB, 0xDF, 1005 },
    { "Gentle Blush", 0xF3, 0xC9, 0xD3, 1006 },
    { "English Rose", 0xF4, 0xB2, 0xC1, 1007 },
    { "Sweet Pea", 0xF3, 0x9E, 0xBC, 1008 },
    { "Rosy Blush", 0xF7, 0x7A, 0xB4, 1009 },
    { "Passion Pink", 0xD7, 0x1F, 0x85, 1010 },
    { "Mulled Wine", 0x77, 0x20, 0x59, 1035 },
    { "Primrose", 0xC5, 0x00, 0x84, 1034 },
    { "Azalea", 0xA1, 0x00, 0x6B, 1033 },
    { "Snowflake", 0xD1, 0xD4, 0xD3, 1148 },
    { "Moonlight", 0xCA, 0xD1, 0xE7, 1147 },
    { "Tulip", 0x9D, 0xAB, 0xE2, 1207 },
    { "Purple Iris", 0x88, 0x84, 0xD5, 1206 },
    { "Grape", 0x1A, 0x21, 0x55, 1209 },
    { "Moon Shadow", 0x64, 0x59, 0xC4, 1211 },
    { "Electric Purple", 0x21, 0x24, 0x92, 1208 },
    { "Indigo", 0x41, 0x12, 0x44, 1210 },
    { "Royal Purple", 0x3B, 0x00, 0x83, 1223 },
    { "Eggplant", 0x15, 0x1C, 0x54, 1267 },
    { "Dark Purple", 0x49, 0x0E, 0x6F, 1269 },
    { "Pure Purple", 0x57, 0x06, 0x8C, 1268 },
    { "Pale Orchid", 0xDC, 0xC7, 0xDF, 1217 },
    { "Dusty Mauve", 0xC2, 0xAC, 0xBE, 1219 },
    { "Orchid", 0xDC, 0x9D, 0xDD, 1218 },
    { "Heather", 0xB3, 0x82, 0xC7, 1213 },
    { "Lavender", 0x9C, 0x5F, 0xB5, 1214 },
    { "Soft Grape", 0x4B, 0x08, 0xA1, 1266 },
    { "Freesia", 0xC1, 0xAF, 0xE5, 1221 },
    { "Lilac", 0xC5, 0xB9, 0xE3, 1222 },
    { "Peony", 0x6E, 0x2C, 0x6B, 1215 },
    { "Dark Fuschia", 0x7D, 0x00, 0x63, 1216 },
    { "Grape Jelly", 0x75, 0x28, 0x64, 1220 },
    { "Deep Orchid", 0x55, 0x51, 0x7B, 1080 },
    { "Misty Blue Gray", 0x5C, 0x7F, 0x92, 1075 },
    { "Iron Ore", 0xAF, 0xAD, 0xC3, 1071 },
    { "Light Mauve", 0xD8, 0xAA, 0xB3, 1152 },
    { "Dark Mauve", 0x89, 0x68, 0x7C, 1153 },
    { "Wild Plum", 0x64, 0x44, 0x59, 1154 },
    { "Huckleberry", 0x4B, 0x30, 0x6A, 1212 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Isacord_Polyester_codes[] = {
#if !ARDUINO
    { "?", 0xFF, 0xFF, 0xFF, 10 },
    { "?", 0xFF, 0xFF, 0xFF, 15 },
    { "?", 0xFF, 0xFF, 0xFF, 17 },
    { "?", 0x00, 0x00, 0x00, 20 },
    { "?", 0xFF, 0xFD, 0xED, 101 },
    { "?", 0x6D, 0x75, 0x7B, 108 },
    { "?", 0x51, 0x5B, 0x61, 111 },
    { "?", 0x5D, 0x5D, 0x5D, 112 },
    { "?", 0xCF, 0xCF, 0xCF, 124 },
    { "?", 0xA1, 0xA9, 0xB4, 131 },
    { "?", 0x19, 0x20, 0x24, 132 },
    { "?", 0x9E, 0xA5, 0xAA, 142 },
    { "?", 0xCF, 0xD1, 0xD5, 145 },
    { "?", 0xC6, 0xBD, 0xB4, 150 },
    { "?", 0xD5, 0xC4, 0xB3, 151 },
    { "?", 0x7C, 0x82, 0x83, 152 },
    { "?", 0xFE, 0xF5, 0xF0, 180 },
    { "?", 0xE9, 0xD7, 0xD9, 182 },
    { "?", 0xEB, 0xE3, 0xDD, 184 },
    { "?", 0xE0, 0xDA, 0x5F, 221 },
    { "?", 0xBF, 0xBA, 0x28, 232 },
    { "?", 0xFA, 0xF6, 0xCC, 250 },
    { "?", 0xF9, 0xF8, 0xE8, 270 },
    { "?", 0xFD, 0xF7, 0x6C, 310 },
    { "?", 0xF5, 0xD3, 0x00, 311 },
    { "?", 0x79, 0x7E, 0x24, 345 },
    { "?", 0xB0, 0xAA, 0x76, 352 },
    { "?", 0x89, 0x8F, 0x2B, 442 },
    { "?", 0x98, 0x99, 0x6D, 453 },
    { "?", 0x6B, 0x7E, 0x6F, 463 },
    { "?", 0x3E, 0x4F, 0x34, 465 },
    { "?", 0xED, 0xEF, 0x05, 501 },
    { "?", 0xF5, 0xD3, 0x00, 506 },
    { "?", 0xFD, 0xE8, 0x96, 520 },
    { "?", 0xD7, 0xCE, 0x8A, 532 },
    { "?", 0xB1, 0x8B, 0x00, 542 },
    { "?", 0xB2, 0x8F, 0x11, 546 },
    { "?", 0xB6, 0x9F, 0x56, 552 },
    { "?", 0xF8, 0xD7, 0x3E, 600 },
    { "?", 0xF8, 0xD7, 0x3E, 605 },
    { "?", 0xF7, 0xDC, 0x00, 608 },
    { "?", 0xFE, 0xF0, 0x9A, 630 },
    { "?", 0xFD, 0xE8, 0x96, 640 },
    { "?", 0xF5, 0xD2, 0xA6, 651 },
    { "?", 0xFE, 0xF9, 0xEA, 660 },
    { "?", 0xFA, 0xF6, 0xE7, 670 },
    { "?", 0xBE, 0xBE, 0xA8, 672 },
    { "?", 0xF7, 0xC3, 0x5F, 700 },
    { "?", 0xF5, 0xCA, 0x00, 702 },
    { "?", 0xDF, 0xA2, 0x00, 704 },
    { "?", 0xFC, 0xF5, 0x38, 706 },
    { "?", 0xFA, 0xDC, 0x59, 713 },
    { "?", 0x8C, 0x7E, 0x6A, 722 },
    { "?", 0x59, 0x49, 0x00, 747 },
    { "?", 0xD6, 0xBF, 0x94, 761 },
    { "?", 0x65, 0x64, 0x52, 776 },
    { "?", 0xF1, 0xAF, 0x00, 800 },
    { "?", 0xF5, 0xBA, 0x5D, 811 },
    { "?", 0xE1, 0xA2, 0x3E, 821 },
    { "?", 0xCC, 0xAB, 0x3F, 822 },
    { "?", 0xDF, 0xA2, 0x00, 824 },
    { "?", 0xD0, 0xA4, 0x4F, 832 },
    { "?", 0xCD, 0x94, 0x4A, 842 },
    { "?", 0xE3, 0xBC, 0x61, 851 },
    { "?", 0x94, 0x7C, 0x4A, 853 },
    { "?", 0xCB, 0xBF, 0xA2, 861 },
    { "?", 0xA5, 0x86, 0x6A, 862 },
    { "?", 0xEB, 0xE7, 0xDD, 870 },
    { "?", 0x9F, 0xA0, 0x86, 873 },
    { "?", 0x9A, 0x89, 0x7B, 874 },
    { "?", 0xF3, 0xB2, 0x59, 904 },
    { "?", 0xCA, 0x83, 0x2C, 922 },
    { "?", 0xC0, 0x73, 0x14, 931 },
    { "?", 0xAC, 0x66, 0x13, 932 },
    { "?", 0x74, 0x48, 0x08, 933 },
    { "?", 0xBD, 0x95, 0x65, 934 },
    { "?", 0xC9, 0x83, 0x00, 940 },
    { "?", 0xAF, 0x7D, 0x3E, 941 },
    { "?", 0x48, 0x39, 0x28, 945 },
    { "?", 0xFE, 0xFE, 0xED, 970 },
    { "?", 0x6A, 0x41, 0x29, 1055 },
    { "?", 0xFD, 0xE2, 0xC1, 1060 },
    { "?", 0xA6, 0x8A, 0x68, 1061 },
    { "?", 0xED, 0x92, 0x06, 1102 },
    { "?", 0xEE, 0x9C, 0x00, 1106 },
    { "?", 0xEE, 0x87, 0x51, 1114 },
    { "?", 0xA3, 0x52, 0x14, 1115 },
    { "?", 0xF8, 0xC0, 0x00, 1120 },
    { "?", 0xB7, 0x97, 0x6B, 1123 },
    { "?", 0x9D, 0x5A, 0x21, 1134 },
    { "?", 0xF3, 0xD8, 0xA8, 1140 },
    { "?", 0xFA, 0xCF, 0xAE, 1141 },
    { "?", 0x7A, 0x44, 0x27, 1154 },
    { "?", 0xDF, 0xC8, 0xAB, 1172 },
    { "?", 0xE8, 0x97, 0x63, 1211 },
    { "?", 0xF1, 0xA2, 0x36, 1220 },
    { "?", 0xE5, 0x57, 0x1D, 1300 },
    { "?", 0xD9, 0x67, 0x4C, 1301 },
    { "?", 0xE4, 0x50, 0x1E, 1304 },
    { "?", 0xEA, 0x71, 0x34, 1305 },
    { "?", 0xE1, 0x2A, 0x23, 1306 },
    { "?", 0xC1, 0x48, 0x17, 1311 },
    { "?", 0xC4, 0x53, 0x31, 1312 },
    { "?", 0xD5, 0x81, 0x5E, 1332 },
    { "?", 0xBB, 0x3D, 0x2E, 1334 },
    { "?", 0xBE, 0x2D, 0x1A, 1335 },
    { "?", 0x5F, 0x1B, 0x23, 1342 },
    { "?", 0x7A, 0x34, 0x41, 1346 },
    { "?", 0xFB, 0xBF, 0x95, 1351 },
    { "?", 0xF4, 0xA7, 0x73, 1352 },
    { "?", 0x69, 0x39, 0x20, 1355 },
    { "?", 0xF9, 0xC5, 0x98, 1362 },
    { "?", 0x43, 0x27, 0x31, 1366 },
    { "?", 0x46, 0x45, 0x37, 1375 },
    { "?", 0xF4, 0xA7, 0x82, 1430 },
    { "?", 0xE2, 0x2D, 0x2A, 1501 },
    { "?", 0xA9, 0x31, 0x21, 1514 },
    { "?", 0xEC, 0x71, 0x68, 1521 },
    { "?", 0xF6, 0xB0, 0x8E, 1532 },
    { "?", 0xF9, 0xC5, 0xB9, 1551 },
    { "?", 0x80, 0x6A, 0x61, 1565 },
    { "?", 0xE3, 0x6C, 0x63, 1600 },
    { "?", 0xE4, 0x47, 0x33, 1701 },
    { "?", 0xDF, 0x00, 0x32, 1703 },
    { "?", 0xE0, 0x00, 0x3D, 1704 },
    { "?", 0xCF, 0x00, 0x40, 1725 },
    { "?", 0xF1, 0xCD, 0xCE, 1755 },
    { "?", 0xE9, 0xC9, 0xBD, 1760 },
    { "?", 0xE8, 0xC0, 0xB8, 1761 },
    { "?", 0xE0, 0x00, 0x46, 1800 },
    { "?", 0xD6, 0x44, 0x5D, 1805 },
    { "?", 0xF4, 0x9E, 0x95, 1840 },
    { "?", 0xFC, 0xDA, 0xD5, 1860 },
    { "?", 0x63, 0x62, 0x54, 1874 },
    { "?", 0x39, 0x45, 0x35, 1876 },
    { "?", 0xE1, 0x00, 0x57, 1900 },
    { "?", 0xBD, 0x00, 0x41, 1902 },
    { "?", 0xC0, 0x03, 0x43, 1903 },
    { "?", 0xA9, 0x02, 0x3A, 1904 },
    { "?", 0xBE, 0x00, 0x4F, 1906 },
    { "?", 0x91, 0x02, 0x30, 1911 },
    { "?", 0x86, 0x02, 0x3E, 1912 },
    { "?", 0x9A, 0x0C, 0x3B, 1913 },
    { "?", 0xA3, 0x30, 0x50, 1921 },
    { "?", 0xF2, 0x8D, 0xA6, 1940 },
    { "?", 0xCE, 0x42, 0x7A, 1950 },
    { "?", 0x95, 0x95, 0x95, 1972 },
    { "?", 0xA3, 0x31, 0x45, 2011 },
    { "?", 0x9F, 0x45, 0x4C, 2022 },
    { "?", 0xC7, 0x97, 0x9B, 2051 },
    { "?", 0x9F, 0x00, 0x3F, 2101 },
    { "?", 0x78, 0x09, 0x3F, 2113 },
    { "?", 0x6D, 0x06, 0x27, 2115 },
    { "?", 0x43, 0x27, 0x32, 2123 },
    { "?", 0xE6, 0x77, 0x8B, 2152 },
    { "?", 0xDF, 0x83, 0x90, 2153 },
    { "?", 0xF9, 0xBF, 0xC0, 2155 },
    { "?", 0xFB, 0xD1, 0xD6, 2160 },
    { "?", 0xD8, 0xD5, 0xD0, 2166 },
    { "?", 0xF7, 0xDE, 0xD6, 2170 },
    { "?", 0xF7, 0xDE, 0xDE, 2171 },
    { "?", 0xE8, 0x41, 0x8C, 2220 },
    { "?", 0x8C, 0x0C, 0x4A, 2222 },
    { "?", 0x88, 0x3A, 0x40, 2224 },
    { "?", 0xEE, 0x71, 0xA1, 2230 },
    { "?", 0xA9, 0x5A, 0x68, 2241 },
    { "?", 0xFA, 0xC8, 0xD3, 2250 },
    { "?", 0xD3, 0x00, 0x7E, 2300 },
    { "?", 0xD2, 0x00, 0x67, 2320 },
    { "?", 0x65, 0x15, 0x33, 2333 },
    { "?", 0x3A, 0x21, 0x2B, 2336 },
    { "?", 0xFD, 0xE5, 0xEC, 2363 },
    { "?", 0x97, 0x00, 0x59, 2500 },
    { "?", 0xAA, 0x43, 0x81, 2504 },
    { "?", 0x82, 0x00, 0x52, 2506 },
    { "?", 0xE2, 0x00, 0x78, 2520 },
    { "?", 0xBF, 0x00, 0x6A, 2521 },
    { "?", 0xF1, 0x89, 0xAF, 2550 },
    { "?", 0xF7, 0xB4, 0xCA, 2560 },
    { "?", 0x49, 0x49, 0x49, 2576 },
    { "?", 0x89, 0x34, 0x80, 2600 },
    { "?", 0x6C, 0x00, 0x51, 2611 },
    { "?", 0xD9, 0x94, 0xB9, 2640 },
    { "?", 0xE6, 0xB7, 0xCF, 2650 },
    { "?", 0xEC, 0xD2, 0xDE, 2655 },
    { "?", 0x60, 0x6D, 0x8C, 2674 },
    { "?", 0x61, 0x00, 0x51, 2711 },
    { "?", 0x49, 0x02, 0x51, 2715 },
    { "?", 0x89, 0x34, 0x7F, 2720 },
    { "?", 0xC6, 0x90, 0xA1, 2764 },
    { "?", 0x6F, 0x06, 0x7B, 2810 },
    { "?", 0xA9, 0x74, 0xAB, 2830 },
    { "?", 0x4C, 0x0F, 0x7B, 2900 },
    { "?", 0x66, 0x40, 0x90, 2905 },
    { "?", 0x83, 0x58, 0x9D, 2910 },
    { "?", 0x8C, 0x6D, 0xAA, 2920 },
    { "?", 0xC9, 0xB5, 0xD4, 3040 },
    { "?", 0xC7, 0x90, 0xBA, 3045 },
    { "?", 0x70, 0x70, 0x70, 3062 },
    { "?", 0x2A, 0x37, 0x7E, 3102 },
    { "?", 0x35, 0x24, 0x7A, 3110 },
    { "?", 0x26, 0x07, 0x51, 3114 },
    { "?", 0x35, 0x3A, 0x90, 3210 },
    { "?", 0x52, 0x4A, 0x90, 3211 },
    { "?", 0x7D, 0x77, 0xAF, 3241 },
    { "?", 0x90, 0x83, 0xA3, 3251 },
    { "?", 0x14, 0x21, 0x4E, 3323 },
    { "?", 0x7F, 0x8B, 0xC2, 3331 },
    { "?", 0x1B, 0x3C, 0x78, 3333 },
    { "?", 0x2E, 0x4B, 0x9B, 3335 },
    { "?", 0x11, 0x26, 0x3C, 3344 },
    { "?", 0x20, 0x2A, 0x65, 3353 },
    { "?", 0x17, 0x1B, 0x4A, 3355 },
    { "?", 0x00, 0x22, 0x32, 3444 },
    { "?", 0x2D, 0x44, 0x91, 3522 },
    { "?", 0x26, 0x12, 0x57, 3536 },
    { "?", 0x3A, 0x28, 0x85, 3541 },
    { "?", 0x23, 0x3B, 0x7D, 3543 },
    { "?", 0x27, 0x3C, 0x82, 3544 },
    { "?", 0x27, 0x26, 0x51, 3554 },
    { "?", 0x28, 0x43, 0x8C, 3600 },
    { "?", 0x24, 0x3A, 0x7D, 3611 },
    { "?", 0x40, 0x55, 0xA1, 3612 },
    { "?", 0x1A, 0x4C, 0x8D, 3622 },
    { "?", 0x92, 0xB1, 0xDC, 3640 },
    { "?", 0x64, 0x8D, 0xC7, 3641 },
    { "?", 0xD0, 0xDE, 0xEE, 3650 },
    { "?", 0xC8, 0xD6, 0xED, 3652 },
    { "?", 0x00, 0x50, 0x7F, 3732 },
    { "?", 0x12, 0x25, 0x3C, 3743 },
    { "?", 0xB7, 0xD1, 0xE3, 3750 },
    { "?", 0xAF, 0xC9, 0xE5, 3761 },
    { "?", 0xCE, 0xD2, 0xD1, 3770 },
    { "?", 0x3D, 0x6A, 0xA1, 3810 },
    { "?", 0x7B, 0xA2, 0xD3, 3815 },
    { "?", 0x91, 0xB9, 0xE2, 3820 },
    { "?", 0xB4, 0xCE, 0xEB, 3840 },
    { "?", 0x50, 0x71, 0x93, 3842 },
    { "?", 0x00, 0x7E, 0xBA, 3900 },
    { "?", 0x00, 0x82, 0xC4, 3901 },
    { "?", 0x00, 0x6C, 0xA5, 3902 },
    { "?", 0x4A, 0xBD, 0xF0, 3910 },
    { "?", 0x86, 0xAA, 0xCA, 3951 },
    { "?", 0x69, 0x76, 0x98, 3953 },
    { "?", 0xA6, 0xD8, 0xF6, 3962 },
    { "?", 0xE1, 0xE1, 0xE1, 3971 },
    { "?", 0x00, 0x93, 0xB9, 4010 },
    { "?", 0x50, 0x77, 0x93, 4032 },
    { "?", 0x26, 0x56, 0x74, 4033 },
    { "?", 0xEA, 0xF0, 0xF9, 4071 },
    { "?", 0x83, 0x86, 0x89, 4073 },
    { "?", 0x2D, 0xB0, 0xCF, 4101 },
    { "?", 0x00, 0x95, 0xC6, 4103 },
    { "?", 0x00, 0xA4, 0xD9, 4111 },
    { "?", 0x00, 0xA9, 0xC9, 4113 },
    { "?", 0x00, 0x82, 0xAD, 4116 },
    { "?", 0x00, 0x40, 0x5D, 4133 },
    { "?", 0x19, 0x20, 0x24, 4174 },
    { "?", 0x4F, 0xB4, 0xCB, 4220 },
    { "?", 0x8D, 0xCE, 0xE4, 4230 },
    { "?", 0x8D, 0xCD, 0xDB, 4240 },
    { "?", 0xD5, 0xEB, 0xF2, 4250 },
    { "?", 0x00, 0x7B, 0x8D, 4410 },
    { "?", 0x00, 0x91, 0xA5, 4421 },
    { "?", 0x00, 0x7D, 0x8C, 4423 },
    { "?", 0x00, 0x79, 0x86, 4425 },
    { "?", 0x5F, 0xBF, 0xD1, 4430 },
    { "?", 0x00, 0x69, 0x81, 4442 },
    { "?", 0x00, 0x7F, 0x92, 4452 },
    { "?", 0x00, 0x2F, 0x38, 4515 },
    { "?", 0x00, 0x73, 0x89, 4531 },
    { "?", 0x00, 0x7B, 0x8D, 4610 },
    { "?", 0x00, 0xA3, 0xA0, 4620 },
    { "?", 0x0B, 0x7F, 0x85, 4625 },
    { "?", 0x00, 0x5B, 0x63, 4643 },
    { "?", 0x23, 0x45, 0x44, 4644 },
    { "?", 0x00, 0x5B, 0x63, 5005 },
    { "?", 0x00, 0xA6, 0xAD, 5010 },
    { "?", 0xB4, 0xDC, 0xD8, 5050 },
    { "?", 0x00, 0x87, 0x6E, 5100 },
    { "?", 0x00, 0x90, 0x84, 5101 },
    { "?", 0x48, 0xBA, 0xB7, 5115 },
    { "?", 0x00, 0xAF, 0x8C, 5210 },
    { "?", 0x8C, 0xCC, 0xC2, 5220 },
    { "?", 0x47, 0xB9, 0xAE, 5230 },
    { "?", 0x19, 0x7E, 0x6D, 5233 },
    { "?", 0x00, 0x6E, 0x42, 5324 },
    { "?", 0x00, 0x4D, 0x3D, 5326 },
    { "?", 0x00, 0x2F, 0x38, 5335 },
    { "?", 0x00, 0x2D, 0x1F, 5374 },
    { "?", 0x00, 0x86, 0x63, 5411 },
    { "?", 0x00, 0x6B, 0x4E, 5415 },
    { "?", 0x00, 0x86, 0x63, 5422 },
    { "?", 0x52, 0xBA, 0x84, 5500 },
    { "?", 0x14, 0xA3, 0x63, 5510 },
    { "?", 0x00, 0x78, 0x48, 5513 },
    { "?", 0x00, 0x86, 0x63, 5515 },
    { "?", 0x52, 0xA0, 0x4F, 5531 },
    { "?", 0x94, 0xAD, 0xA1, 5552 },
    { "?", 0x10, 0x38, 0x28, 5555 },
    { "?", 0x85, 0xC8, 0x75, 5610 },
    { "?", 0x14, 0xB2, 0x6D, 5613 },
    { "?", 0x1A, 0x78, 0x1E, 5633 },
    { "?", 0x15, 0x74, 0x36, 5643 },
    { "?", 0xC9, 0xE3, 0xC5, 5650 },
    { "?", 0x6B, 0x91, 0x81, 5664 },
    { "?", 0xA5, 0xC2, 0x78, 5822 },
    { "?", 0x70, 0x95, 0x3F, 5833 },
    { "?", 0x27, 0x30, 0x14, 5866 },
    { "?", 0x81, 0xC7, 0x50, 5912 },
    { "?", 0x45, 0x70, 0x21, 5933 },
    { "?", 0x50, 0x67, 0x02, 5934 },
    { "?", 0xBB, 0xDB, 0x41, 5940 },
    { "?", 0x00, 0x35, 0x18, 5944 },
    { "?", 0xE3, 0xEB, 0x00, 6010 },
    { "?", 0xBE, 0xD7, 0x82, 6051 },
    { "?", 0x91, 0x96, 0x00, 6133 },
    { "?", 0x48, 0x46, 0x01, 6156 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Isafil_Rayon_codes[] = {
#if !ARDUINO
    { "?", 0xFF, 0xFF, 0xFF, 10 },
    { "?", 0xFF, 0xFF, 0xFF, 15 },
    { "?", 0xFF, 0xFF, 0xFF, 17 },
    { "?", 0x00, 0x00, 0x00, 20 },
    { "?", 0xFF, 0xFD, 0xED, 101 },
    { "?", 0x7D, 0x7D, 0x7D, 104 },
    { "?", 0x51, 0x5B, 0x61, 107 },
    { "?", 0x6D, 0x75, 0x7B, 108 },
    { "?", 0xAC, 0xAC, 0xAC, 109 },
    { "?", 0x51, 0x5B, 0x61, 111 },
    { "?", 0x5D, 0x5D, 0x5D, 112 },
    { "?", 0xCF, 0xCF, 0xCF, 124 },
    { "?", 0xA1, 0xA9, 0xB4, 131 },
    { "?", 0x6D, 0x75, 0x7B, 141 },
    { "?", 0x9E, 0xA5, 0xAA, 142 },
    { "?", 0xCF, 0xD1, 0xD5, 145 },
    { "?", 0xC6, 0xBD, 0xB4, 150 },
    { "?", 0xD5, 0xC4, 0xB3, 151 },
    { "?", 0x7C, 0x82, 0x83, 152 },
    { "?", 0x89, 0x8F, 0x94, 156 },
    { "?", 0xFE, 0xF5, 0xF0, 180 },
    { "?", 0xE9, 0xD7, 0xD9, 182 },
    { "?", 0xEB, 0xE3, 0xDD, 184 },
    { "?", 0xE0, 0xDA, 0x5F, 221 },
    { "?", 0xBF, 0xBA, 0x28, 232 },
    { "?", 0xEC, 0xE9, 0xC1, 241 },
    { "?", 0xFA, 0xF6, 0xCC, 250 },
    { "?", 0xEC, 0xE7, 0xA5, 251 },
    { "?", 0xEC, 0xEA, 0xDB, 260 },
    { "?", 0xF9, 0xF8, 0xE8, 270 },
    { "?", 0xFD, 0xF7, 0x6C, 310 },
    { "?", 0xF5, 0xD3, 0x00, 311 },
    { "?", 0x79, 0x7E, 0x24, 345 },
    { "?", 0xB0, 0xAA, 0x76, 352 },
    { "?", 0x89, 0x8F, 0x2B, 442 },
    { "?", 0x98, 0x99, 0x6D, 453 },
    { "?", 0x6E, 0x77, 0x2E, 454 },
    { "?", 0x6B, 0x7E, 0x6F, 463 },
    { "?", 0x3E, 0x4F, 0x34, 465 },
    { "?", 0xED, 0xEF, 0x05, 501 },
    { "?", 0xFA, 0xF6, 0xCC, 505 },
    { "?", 0xF5, 0xD3, 0x00, 506 },
    { "?", 0xFF, 0xFB, 0xD1, 510 },
    { "?", 0xFD, 0xE8, 0x96, 520 },
    { "?", 0xD7, 0xCE, 0x8A, 532 },
    { "?", 0xB1, 0x8B, 0x00, 542 },
    { "?", 0xAA, 0x8D, 0x00, 545 },
    { "?", 0xB2, 0x8F, 0x11, 546 },
    { "?", 0xAC, 0x94, 0x36, 551 },
    { "?", 0xB6, 0x9F, 0x56, 552 },
    { "?", 0xF4, 0xEE, 0x8C, 580 },
    { "?", 0xF1, 0xEB, 0x35, 590 },
    { "?", 0xF8, 0xD7, 0x3E, 600 },
    { "?", 0xF8, 0xD7, 0x3E, 605 },
    { "?", 0xF7, 0xCB, 0x47, 610 },
    { "?", 0xF7, 0xE4, 0x00, 615 },
    { "?", 0xFD, 0xE8, 0x96, 620 },
    { "?", 0xEE, 0xDB, 0x00, 625 },
    { "?", 0xFE, 0xF0, 0x9A, 630 },
    { "?", 0xFD, 0xE1, 0xAF, 635 },
    { "?", 0xFD, 0xE8, 0x96, 640 },
    { "?", 0xF5, 0xD2, 0xA6, 651 },
    { "?", 0xFE, 0xF9, 0xEA, 660 },
    { "?", 0xFA, 0xF6, 0xE7, 670 },
    { "?", 0xBE, 0xBE, 0xA8, 672 },
    { "?", 0xF7, 0xC3, 0x5F, 700 },
    { "?", 0xF5, 0xCA, 0x00, 702 },
    { "?", 0xDF, 0xA2, 0x00, 704 },
    { "?", 0xFC, 0xF5, 0x38, 706 },
    { "?", 0xFA, 0xDC, 0x59, 713 },
    { "?", 0x8C, 0x7E, 0x6A, 722 },
    { "?", 0x82, 0x70, 0x00, 726 },
    { "?", 0x63, 0x62, 0x54, 732 },
    { "?", 0x59, 0x49, 0x00, 747 },
    { "?", 0xD6, 0xBF, 0x94, 761 },
    { "?", 0x65, 0x64, 0x52, 776 },
    { "?", 0xF1, 0xAF, 0x00, 800 },
    { "?", 0xF3, 0xC2, 0x00, 805 },
    { "?", 0xF5, 0xBA, 0x5D, 811 },
    { "?", 0xE1, 0xA2, 0x3E, 821 },
    { "?", 0xCC, 0xAB, 0x3F, 822 },
    { "?", 0xDF, 0xA2, 0x00, 824 },
    { "?", 0xF3, 0xB0, 0x44, 830 },
    { "?", 0xD0, 0xA4, 0x4F, 832 },
    { "?", 0xCD, 0x94, 0x4A, 842 },
    { "?", 0xE3, 0xBC, 0x61, 851 },
    { "?", 0x94, 0x7C, 0x4A, 853 },
    { "?", 0x00, 0x1F, 0x48, 866 },
    { "?", 0xEB, 0xE7, 0xDD, 870 },
    { "?", 0x9F, 0xA0, 0x86, 873 },
    { "?", 0x9A, 0x89, 0x7B, 874 },
    { "?", 0xEE, 0x9C, 0x00, 900 },
    { "?", 0xF3, 0xB2, 0x59, 904 },
    { "?", 0xCA, 0x83, 0x2C, 922 },
    { "?", 0xC0, 0x73, 0x14, 931 },
    { "?", 0xAC, 0x66, 0x13, 932 },
    { "?", 0x74, 0x48, 0x08, 933 },
    { "?", 0xBD, 0x95, 0x65, 934 },
    { "?", 0x80, 0x68, 0x00, 936 },
    { "?", 0xC9, 0x83, 0x00, 940 },
    { "?", 0xAF, 0x7D, 0x3E, 941 },
    { "?", 0x48, 0x39, 0x28, 945 },
    { "?", 0xFE, 0xEC, 0xD9, 961 },
    { "?", 0xFE, 0xFE, 0xED, 970 },
    { "?", 0xDD, 0x97, 0x3A, 1041 },
    { "?", 0x6A, 0x41, 0x29, 1055 },
    { "?", 0xFD, 0xE2, 0xC1, 1060 },
    { "?", 0xA6, 0x8A, 0x68, 1061 },
    { "?", 0xD7, 0x68, 0x14, 1099 },
    { "?", 0xED, 0x87, 0x3F, 1100 },
    { "?", 0xEC, 0x87, 0x0E, 1101 },
    { "?", 0xED, 0x92, 0x06, 1102 },
    { "?", 0xEE, 0x9C, 0x00, 1106 },
    { "?", 0xC4, 0x53, 0x31, 1113 },
    { "?", 0xEE, 0x87, 0x51, 1114 },
    { "?", 0xA3, 0x52, 0x14, 1115 },
    { "?", 0xF8, 0xC0, 0x00, 1120 },
    { "?", 0xB7, 0x97, 0x6B, 1123 },
    { "?", 0x9D, 0x5A, 0x21, 1134 },
    { "?", 0xF3, 0xD8, 0xA8, 1140 },
    { "?", 0xFA, 0xCF, 0xAE, 1141 },
    { "?", 0xDF, 0xC8, 0xAB, 1172 },
    { "?", 0xE8, 0x97, 0x63, 1211 },
    { "?", 0xF1, 0xA2, 0x36, 1220 },
    { "?", 0x3D, 0x27, 0x23, 1276 },
    { "?", 0xE5, 0x57, 0x1D, 1300 },
    { "?", 0xE8, 0x64, 0x3C, 1302 },
    { "?", 0xE4, 0x50, 0x1E, 1304 },
    { "?", 0xEA, 0x71, 0x34, 1305 },
    { "?", 0xE1, 0x2A, 0x23, 1306 },
    { "?", 0xC1, 0x48, 0x17, 1311 },
    { "?", 0xC4, 0x53, 0x31, 1312 },
    { "?", 0xD7, 0x62, 0x3E, 1313 },
    { "?", 0xED, 0x7C, 0x56, 1320 },
    { "?", 0x92, 0x29, 0x1B, 1324 },
    { "?", 0xD5, 0x81, 0x5E, 1332 },
    { "?", 0xBB, 0x3D, 0x2E, 1334 },
    { "?", 0xBE, 0x2D, 0x1A, 1335 },
    { "?", 0x5F, 0x1B, 0x23, 1342 },
    { "?", 0x7A, 0x34, 0x41, 1346 },
    { "?", 0x84, 0x29, 0x1D, 1348 },
    { "?", 0xFB, 0xBF, 0x95, 1351 },
    { "?", 0xF4, 0xA7, 0x73, 1352 },
    { "?", 0x69, 0x39, 0x20, 1355 },
    { "?", 0xF9, 0xC6, 0xA1, 1361 },
    { "?", 0xF9, 0xC5, 0x98, 1362 },
    { "?", 0x43, 0x27, 0x31, 1366 },
    { "?", 0x46, 0x45, 0x37, 1375 },
    { "?", 0x4D, 0x2E, 0x18, 1376 },
    { "?", 0xD6, 0x4F, 0x42, 1421 },
    { "?", 0xF4, 0xA7, 0x82, 1430 },
    { "?", 0xE2, 0x2D, 0x2A, 1501 },
    { "?", 0xA9, 0x31, 0x21, 1514 },
    { "?", 0xEC, 0x71, 0x68, 1521 },
    { "?", 0xF6, 0xB0, 0x8E, 1532 },
    { "?", 0xF9, 0xC5, 0xB9, 1551 },
    { "?", 0x80, 0x6A, 0x61, 1565 },
    { "?", 0x46, 0x45, 0x37, 1573 },
    { "?", 0xE3, 0x6C, 0x63, 1600 },
    { "?", 0xF9, 0xC7, 0xB9, 1630 },
    { "?", 0xE4, 0x47, 0x33, 1701 },
    { "?", 0xDF, 0x00, 0x32, 1703 },
    { "?", 0xE4, 0x47, 0x33, 1705 },
    { "?", 0xCF, 0x00, 0x40, 1725 },
    { "?", 0xDB, 0x68, 0x6B, 1750 },
    { "?", 0xF1, 0xCD, 0xCE, 1755 },
    { "?", 0xE9, 0xC9, 0xBD, 1760 },
    { "?", 0xE8, 0xC0, 0xB8, 1761 },
    { "?", 0xE0, 0x00, 0x46, 1800 },
    { "?", 0xE4, 0x34, 0x49, 1802 },
    { "?", 0xD6, 0x44, 0x5D, 1805 },
    { "?", 0xF4, 0x9E, 0x95, 1840 },
    { "?", 0xB7, 0x66, 0x63, 1842 },
    { "?", 0xE3, 0x6C, 0x63, 1849 },
    { "?", 0xF0, 0x88, 0x7D, 1850 },
    { "?", 0xFA, 0xC7, 0xC1, 1855 },
    { "?", 0xFC, 0xDA, 0xD5, 1860 },
    { "?", 0xFD, 0xE3, 0xD3, 1870 },
    { "?", 0x63, 0x62, 0x54, 1874 },
    { "?", 0x39, 0x45, 0x35, 1876 },
    { "?", 0xE1, 0x00, 0x57, 1900 },
    { "?", 0xBD, 0x00, 0x41, 1902 },
    { "?", 0xC0, 0x03, 0x43, 1903 },
    { "?", 0xA9, 0x02, 0x3A, 1904 },
    { "?", 0x96, 0x00, 0x18, 1905 },
    { "?", 0xBE, 0x00, 0x4F, 1906 },
    { "?", 0x91, 0x02, 0x30, 1911 },
    { "?", 0x86, 0x02, 0x3E, 1912 },
    { "?", 0x9A, 0x0C, 0x3B, 1913 },
    { "?", 0xA4, 0x1F, 0x39, 1914 },
    { "?", 0xA3, 0x30, 0x50, 1921 },
    { "?", 0xF2, 0x8D, 0xA6, 1940 },
    { "?", 0xCE, 0x42, 0x7A, 1950 },
    { "?", 0xF2, 0xB9, 0xBE, 1960 },
    { "?", 0x95, 0x95, 0x95, 1972 },
    { "?", 0xA3, 0x31, 0x45, 2011 },
    { "?", 0x9F, 0x45, 0x4C, 2022 },
    { "?", 0xC7, 0x97, 0x9B, 2051 },
    { "?", 0xD1, 0x8D, 0x89, 2053 },
    { "?", 0x97, 0x00, 0x38, 2100 },
    { "?", 0x9F, 0x00, 0x3F, 2101 },
    { "?", 0x78, 0x09, 0x3F, 2113 },
    { "?", 0x43, 0x27, 0x32, 2123 },
    { "?", 0xE6, 0x77, 0x8B, 2152 },
    { "?", 0xDF, 0x83, 0x90, 2153 },
    { "?", 0xF9, 0xBF, 0xC0, 2155 },
    { "?", 0xFB, 0xD1, 0xD6, 2160 },
    { "?", 0xFD, 0xE3, 0xDB, 2165 },
    { "?", 0xD8, 0xD5, 0xD0, 2166 },
    { "?", 0xFE, 0xED, 0xE2, 2168 },
    { "?", 0xF7, 0xDE, 0xD6, 2170 },
    { "?", 0xF7, 0xDE, 0xDE, 2171 },
    { "?", 0xFC, 0xD9, 0xC4, 2180 },
    { "?", 0xE8, 0x41, 0x8C, 2220 },
    { "?", 0x8C, 0x0C, 0x4A, 2222 },
    { "?", 0x88, 0x3A, 0x40, 2224 },
    { "?", 0xEE, 0x71, 0xA1, 2230 },
    { "?", 0xA9, 0x5A, 0x68, 2241 },
    { "?", 0xFA, 0xC8, 0xD3, 2250 },
    { "?", 0xD3, 0x00, 0x7E, 2300 },
    { "?", 0xBF, 0x00, 0x6A, 2310 },
    { "?", 0xD2, 0x00, 0x67, 2320 },
    { "?", 0x78, 0x0C, 0x38, 2332 },
    { "?", 0x65, 0x15, 0x33, 2333 },
    { "?", 0x3A, 0x21, 0x2B, 2336 },
    { "?", 0xF2, 0xE0, 0xDC, 2360 },
    { "?", 0xFD, 0xE5, 0xEC, 2363 },
    { "?", 0x97, 0x00, 0x59, 2500 },
    { "?", 0x8B, 0x17, 0x71, 2502 },
    { "?", 0xAA, 0x43, 0x81, 2504 },
    { "?", 0xB4, 0x00, 0x73, 2505 },
    { "?", 0x82, 0x00, 0x52, 2506 },
    { "?", 0xD6, 0x3C, 0x81, 2513 },
    { "?", 0xE2, 0x00, 0x78, 2520 },
    { "?", 0xBF, 0x00, 0x6A, 2521 },
    { "?", 0xEE, 0x71, 0xA1, 2524 },
    { "?", 0xF1, 0x89, 0xAF, 2550 },
    { "?", 0xF7, 0xB4, 0xCA, 2555 },
    { "?", 0xF7, 0xB4, 0xCA, 2560 },
    { "?", 0x49, 0x49, 0x49, 2576 },
    { "?", 0x39, 0x42, 0x48, 2578 },
    { "?", 0x89, 0x34, 0x80, 2600 },
    { "?", 0x6C, 0x00, 0x51, 2611 },
    { "?", 0xCD, 0x73, 0xA6, 2620 },
    { "?", 0xD9, 0x94, 0xB9, 2640 },
    { "?", 0xDD, 0xBD, 0xD5, 2645 },
    { "?", 0xE6, 0xB7, 0xCF, 2650 },
    { "?", 0xEC, 0xD2, 0xDE, 2655 },
    { "?", 0x60, 0x6D, 0x8C, 2674 },
    { "?", 0x64, 0x6A, 0x6E, 2675 },
    { "?", 0x61, 0x00, 0x51, 2711 },
    { "?", 0x70, 0x41, 0x91, 2712 },
    { "?", 0x49, 0x02, 0x51, 2715 },
    { "?", 0x2F, 0x20, 0x6F, 2743 },
    { "?", 0xC6, 0x90, 0xA1, 2764 },
    { "?", 0x6F, 0x06, 0x7B, 2810 },
    { "?", 0xAD, 0x85, 0xB1, 2820 },
    { "?", 0xA9, 0x74, 0xAB, 2830 },
    { "?", 0x4C, 0x0F, 0x7B, 2900 },
    { "?", 0x66, 0x40, 0x90, 2905 },
    { "?", 0x83, 0x58, 0x9D, 2910 },
    { "?", 0x8C, 0x6D, 0xAA, 2920 },
    { "?", 0xC9, 0xB5, 0xD4, 3040 },
    { "?", 0xC7, 0x90, 0xBA, 3045 },
    { "?", 0x70, 0x70, 0x70, 3062 },
    { "?", 0x2A, 0x37, 0x7E, 3102 },
    { "?", 0x3C, 0x1F, 0x81, 3103 },
    { "?", 0x35, 0x24, 0x7A, 3110 },
    { "?", 0x26, 0x07, 0x51, 3114 },
    { "?", 0x28, 0x13, 0x5B, 3133 },
    { "?", 0x6E, 0x5D, 0xA3, 3200 },
    { "?", 0x35, 0x3A, 0x90, 3210 },
    { "?", 0x52, 0x4A, 0x90, 3211 },
    { "?", 0x78, 0x5F, 0xA3, 3213 },
    { "?", 0x24, 0x17, 0x57, 3222 },
    { "?", 0x7D, 0x77, 0xAF, 3241 },
    { "?", 0x90, 0x83, 0xA3, 3251 },
    { "?", 0xB2, 0xAA, 0xBD, 3262 },
    { "?", 0x39, 0x2D, 0x88, 3301 },
    { "?", 0x56, 0x61, 0xA8, 3321 },
    { "?", 0x32, 0x38, 0x87, 3322 },
    { "?", 0x14, 0x21, 0x4E, 3323 },
    { "?", 0x3A, 0x28, 0x85, 3330 },
    { "?", 0x7F, 0x8B, 0xC2, 3331 },
    { "?", 0x1B, 0x3C, 0x78, 3333 },
    { "?", 0xB9, 0xBD, 0xD9, 3340 },
    { "?", 0x11, 0x26, 0x3C, 3344 },
    { "?", 0x20, 0x2A, 0x65, 3353 },
    { "?", 0x17, 0x1B, 0x4A, 3355 },
    { "?", 0x95, 0x9A, 0xCA, 3420 },
    { "?", 0x6A, 0x76, 0xB5, 3430 },
    { "?", 0x11, 0x26, 0x3C, 3443 },
    { "?", 0x00, 0x22, 0x32, 3444 },
    { "?", 0x2D, 0x44, 0x91, 3522 },
    { "?", 0x26, 0x12, 0x57, 3536 },
    { "?", 0x53, 0x42, 0x8A, 3540 },
    { "?", 0x3A, 0x28, 0x85, 3541 },
    { "?", 0x23, 0x3B, 0x7D, 3543 },
    { "?", 0x27, 0x3C, 0x82, 3544 },
    { "?", 0x27, 0x26, 0x51, 3554 },
    { "?", 0x28, 0x43, 0x8C, 3600 },
    { "?", 0x24, 0x3A, 0x7D, 3611 },
    { "?", 0x40, 0x55, 0xA1, 3612 },
    { "?", 0x1A, 0x4C, 0x8D, 3622 },
    { "?", 0x1E, 0x56, 0x9F, 3631 },
    { "?", 0x92, 0xB1, 0xDC, 3640 },
    { "?", 0x64, 0x8D, 0xC7, 3641 },
    { "?", 0xD0, 0xDE, 0xEE, 3650 },
    { "?", 0xEA, 0xF0, 0xF9, 3661 },
    { "?", 0x00, 0x50, 0x7F, 3732 },
    { "?", 0x12, 0x25, 0x3C, 3743 },
    { "?", 0xB7, 0xD1, 0xE3, 3750 },
    { "?", 0xD0, 0xDE, 0xEE, 3752 },
    { "?", 0xAF, 0xC9, 0xE5, 3761 },
    { "?", 0xCE, 0xD2, 0xD1, 3770 },
    { "?", 0x3D, 0x6A, 0xA1, 3810 },
    { "?", 0x91, 0xB9, 0xE2, 3820 },
    { "?", 0x00, 0x77, 0x9E, 3822 },
    { "?", 0xB4, 0xCE, 0xEB, 3840 },
    { "?", 0x50, 0x71, 0x93, 3842 },
    { "?", 0xD5, 0xE3, 0xF4, 3845 },
    { "?", 0x9A, 0xB8, 0xD3, 3851 },
    { "?", 0x00, 0x7E, 0xBA, 3900 },
    { "?", 0x00, 0x82, 0xC4, 3901 },
    { "?", 0x00, 0x6C, 0xA5, 3902 },
    { "?", 0x4A, 0xBD, 0xF0, 3910 },
    { "?", 0x86, 0xAA, 0xCA, 3951 },
    { "?", 0x48, 0x5E, 0x8A, 3952 },
    { "?", 0x69, 0x76, 0x98, 3953 },
    { "?", 0xC5, 0xE1, 0xF3, 3961 },
    { "?", 0xA6, 0xD8, 0xF6, 3962 },
    { "?", 0xE1, 0xE1, 0xE1, 3971 },
    { "?", 0x00, 0x93, 0xB9, 4010 },
    { "?", 0x00, 0x65, 0x87, 4022 },
    { "?", 0x87, 0xC7, 0xEA, 4030 },
    { "?", 0x50, 0x77, 0x93, 4032 },
    { "?", 0x26, 0x56, 0x74, 4033 },
    { "?", 0x9E, 0xD4, 0xE6, 4040 },
    { "?", 0xEA, 0xF0, 0xF9, 4071 },
    { "?", 0x00, 0x96, 0xC1, 4100 },
    { "?", 0x2D, 0xB0, 0xCF, 4101 },
    { "?", 0x00, 0x95, 0xC6, 4103 },
    { "?", 0x00, 0x81, 0xAA, 4105 },
    { "?", 0x00, 0xA4, 0xD9, 4111 },
    { "?", 0x00, 0xA9, 0xC9, 4113 },
    { "?", 0x5D, 0xBF, 0xD2, 4121 },
    { "?", 0x00, 0x40, 0x5D, 4133 },
    { "?", 0x19, 0x20, 0x24, 4174 },
    { "?", 0x19, 0x20, 0x24, 4175 },
    { "?", 0x4F, 0xB4, 0xCB, 4220 },
    { "?", 0x8D, 0xCE, 0xE4, 4230 },
    { "?", 0x2D, 0xB0, 0xCF, 4231 },
    { "?", 0x00, 0x65, 0x87, 4232 },
    { "?", 0x8D, 0xCD, 0xDB, 4240 },
    { "?", 0xD5, 0xEB, 0xF2, 4250 },
    { "?", 0x00, 0x73, 0x89, 4400 },
    { "?", 0x00, 0x7B, 0x8D, 4410 },
    { "?", 0x00, 0xB2, 0xCA, 4420 },
    { "?", 0x00, 0x91, 0xA5, 4421 },
    { "?", 0x00, 0x7D, 0x8C, 4423 },
    { "?", 0x00, 0x79, 0x86, 4425 },
    { "?", 0x5F, 0xBF, 0xD1, 4430 },
    { "?", 0x00, 0x42, 0x50, 4432 },
    { "?", 0x8D, 0xCE, 0xE4, 4440 },
    { "?", 0x00, 0x69, 0x81, 4442 },
    { "?", 0x00, 0x7F, 0x92, 4452 },
    { "?", 0x00, 0x81, 0x92, 4500 },
    { "?", 0x00, 0x70, 0x79, 4513 },
    { "?", 0x00, 0x2F, 0x38, 4515 },
    { "?", 0x00, 0x64, 0x6A, 4516 },
    { "?", 0x00, 0x73, 0x89, 4531 },
    { "?", 0x00, 0x7B, 0x8D, 4610 },
    { "?", 0x00, 0xA3, 0xA0, 4620 },
    { "?", 0x0B, 0x7F, 0x85, 4625 },
    { "?", 0x00, 0x5B, 0x63, 4643 },
    { "?", 0x23, 0x45, 0x44, 4644 },
    { "?", 0x8C, 0xCD, 0xD3, 4840 },
    { "?", 0x00, 0x6F, 0x73, 5000 },
    { "?", 0x00, 0x5B, 0x63, 5005 },
    { "?", 0x00, 0xA6, 0xAD, 5010 },
    { "?", 0x49, 0xBA, 0xC0, 5020 },
    { "?", 0xCF, 0xDD, 0xE0, 5040 },
    { "?", 0xB4, 0xDC, 0xD8, 5050 },
    { "?", 0x00, 0x87, 0x6E, 5100 },
    { "?", 0x00, 0x90, 0x84, 5101 },
    { "?", 0x00, 0xB1, 0xAE, 5111 },
    { "?", 0x48, 0xBA, 0xB7, 5115 },
    { "?", 0x00, 0xAF, 0x8C, 5210 },
    { "?", 0x8C, 0xCC, 0xC2, 5220 },
    { "?", 0x47, 0xB9, 0xAE, 5230 },
    { "?", 0x19, 0x7E, 0x6D, 5233 },
    { "?", 0x8C, 0xCC, 0xC2, 5240 },
    { "?", 0x00, 0x5B, 0x63, 5255 },
    { "?", 0x00, 0x6E, 0x42, 5324 },
    { "?", 0x00, 0x4D, 0x3D, 5326 },
    { "?", 0x00, 0x2F, 0x38, 5335 },
    { "?", 0x00, 0x2D, 0x1F, 5374 },
    { "?", 0x00, 0x2F, 0x38, 5375 },
    { "?", 0x00, 0x86, 0x63, 5411 },
    { "?", 0x00, 0x6B, 0x4E, 5415 },
    { "?", 0x00, 0x86, 0x63, 5422 },
    { "?", 0x00, 0x6B, 0x56, 5425 },
    { "?", 0x00, 0x88, 0x79, 5431 },
    { "?", 0xDB, 0xE9, 0xE5, 5460 },
    { "?", 0x6A, 0xC0, 0x93, 5470 },
    { "?", 0x52, 0xBA, 0x84, 5500 },
    { "?", 0x14, 0xA3, 0x63, 5510 },
    { "?", 0x00, 0x78, 0x48, 5513 },
    { "?", 0x00, 0x86, 0x63, 5515 },
    { "?", 0x52, 0xA0, 0x4F, 5531 },
    { "?", 0x6E, 0xA2, 0x93, 5542 },
    { "?", 0x94, 0xAD, 0xA1, 5552 },
    { "?", 0x10, 0x38, 0x28, 5555 },
    { "?", 0x63, 0xBE, 0x5F, 5600 },
    { "?", 0x85, 0xC8, 0x75, 5610 },
    { "?", 0x2C, 0xB4, 0x31, 5611 },
    { "?", 0x14, 0xB2, 0x6D, 5613 },
    { "?", 0x40, 0xB7, 0x80, 5620 },
    { "?", 0x1A, 0x78, 0x1E, 5633 },
    { "?", 0x15, 0x74, 0x36, 5643 },
    { "?", 0xC9, 0xE3, 0xC5, 5650 },
    { "?", 0x6B, 0x91, 0x81, 5664 },
    { "?", 0x3A, 0x6D, 0x57, 5765 },
    { "?", 0x10, 0x38, 0x28, 5766 },
    { "?", 0x02, 0x14, 0x0C, 5776 },
    { "?", 0xA5, 0xC2, 0x78, 5822 },
    { "?", 0xB4, 0xD3, 0x83, 5832 },
    { "?", 0x70, 0x95, 0x3F, 5833 },
    { "?", 0xA2, 0xD2, 0x89, 5840 },
    { "?", 0x27, 0x30, 0x14, 5866 },
    { "?", 0x81, 0xC7, 0x50, 5912 },
    { "?", 0x45, 0x70, 0x21, 5933 },
    { "?", 0x50, 0x67, 0x02, 5934 },
    { "?", 0xBB, 0xDB, 0x41, 5940 },
    { "?", 0x00, 0x35, 0x18, 5944 },
    { "?", 0xE3, 0xEB, 0x00, 6010 },
    { "?", 0xBE, 0xD7, 0x82, 6051 },
    { "?", 0x2D, 0x3B, 0x01, 6065 },
    { "?", 0xDC, 0xDD, 0xD1, 6071 },
    { "?", 0x91, 0x96, 0x00, 6133 },
    { "?", 0x48, 0x46, 0x01, 6156 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Marathon_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Marathon_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Madeira_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Madeira_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Metro_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Pantone_codes[] = {
#if !ARDUINO
    { "?", 0xFF, 0xFF, 0x7D, 100 },
    { "?", 0xFF, 0xFF, 0x36, 101 },
    { "?", 0xFF, 0xFC, 0x0D, 102 },
    { "?", 0xD1, 0xCB, 0x00, 103 },
    { "?", 0xB3, 0xAD, 0x00, 104 },
    { "?", 0x80, 0x7C, 0x00, 105 },
    { "?", 0xFF, 0xFA, 0x4F, 106 },
    { "?", 0xFF, 0xF5, 0x36, 107 },
    { "?", 0xFF, 0xF0, 0x0D, 108 },
    { "?", 0xFF, 0xE6, 0x00, 109 },
    { "?", 0xED, 0xD1, 0x00, 110 },
    { "?", 0xBA, 0xA6, 0x00, 111 },
    { "?", 0x9E, 0x8E, 0x00, 112 },
    { "?", 0xFF, 0xED, 0x57, 113 },
    { "?", 0xFF, 0xEB, 0x45, 114 },
    { "?", 0xFF, 0xE8, 0x33, 115 },
    { "?", 0xFF, 0xD6, 0x00, 116 },
    { "?", 0xD9, 0xB2, 0x00, 117 },
    { "?", 0xBA, 0x99, 0x00, 118 },
    { "?", 0x82, 0x72, 0x00, 119 },
    { "?", 0xFF, 0xE8, 0x6B, 120 },
    { "?", 0xFF, 0xF2, 0xB0, 1205 },
    { "?", 0xFF, 0xE3, 0x4F, 121 },
    { "?", 0xFF, 0xE8, 0x8C, 1215 },
    { "?", 0xFF, 0xD4, 0x33, 122 },
    { "?", 0xFF, 0xD4, 0x61, 1225 },
    { "?", 0xFF, 0xC2, 0x0F, 123 },
    { "?", 0xFF, 0xB5, 0x17, 1235 },
    { "?", 0xF0, 0xAD, 0x00, 124 },
    { "?", 0xD1, 0x97, 0x00, 1245 },
    { "?", 0xBD, 0x8C, 0x00, 125 },
    { "?", 0xA8, 0x7B, 0x00, 1255 },
    { "?", 0xA1, 0x78, 0x00, 126 },
    { "?", 0x7D, 0x5B, 0x00, 1265 },
    { "?", 0xFF, 0xED, 0x80, 127 },
    { "?", 0xFF, 0xE3, 0x59, 128 },
    { "?", 0xFF, 0xD6, 0x3B, 129 },
    { "?", 0xFF, 0xB3, 0x00, 130 },
    { "?", 0xE8, 0x9E, 0x00, 131 },
    { "?", 0xB3, 0x81, 0x00, 132 },
    { "?", 0x70, 0x5A, 0x00, 133 },
    { "?", 0xFF, 0xE3, 0x8C, 134 },
    { "?", 0xFF, 0xDB, 0x87, 1345 },
    { "?", 0xFF, 0xCF, 0x66, 135 },
    { "?", 0xFF, 0xCC, 0x70, 1355 },
    { "?", 0xFF, 0xBA, 0x3D, 136 },
    { "?", 0xFF, 0xB5, 0x47, 1365 },
    { "?", 0xFF, 0xA6, 0x1A, 137 },
    { "?", 0xFF, 0x99, 0x1A, 1375 },
    { "?", 0xFC, 0x92, 0x00, 138 },
    { "?", 0xED, 0x85, 0x00, 1385 },
    { "?", 0xC4, 0x7C, 0x00, 139 },
    { "?", 0xA1, 0x5F, 0x00, 1395 },
    { "?", 0x75, 0x56, 0x00, 140 },
    { "?", 0x5E, 0x3C, 0x00, 1405 },
    { "?", 0xFF, 0xCF, 0x7D, 141 },
    { "?", 0xFF, 0xB8, 0x3D, 142 },
    { "?", 0xFF, 0xA6, 0x26, 143 },
    { "?", 0xFF, 0x85, 0x00, 144 },
    { "?", 0xEB, 0x7C, 0x00, 145 },
    { "?", 0xAB, 0x61, 0x00, 146 },
    { "?", 0x70, 0x51, 0x00, 147 },
    { "?", 0xFF, 0xD6, 0xA1, 148 },
    { "?", 0xFF, 0xBA, 0x75, 1485 },
    { "?", 0xFF, 0xC4, 0x87, 149 },
    { "?", 0xFF, 0xAB, 0x54, 1495 },
    { "?", 0xFF, 0xA6, 0x4D, 150 },
    { "?", 0xFF, 0x94, 0x3B, 1505 },
    { "?", 0xFF, 0x85, 0x0D, 151 },
    { "?", 0xFC, 0x7C, 0x00, 152 },
    { "?", 0xE6, 0x60, 0x00, 1525 },
    { "?", 0xD1, 0x71, 0x00, 153 },
    { "?", 0x9E, 0x4A, 0x00, 1535 },
    { "?", 0xA8, 0x5B, 0x00, 154 },
    { "?", 0x47, 0x22, 0x00, 1545 },
    { "?", 0xFF, 0xE0, 0xB8, 155 },
    { "?", 0xFF, 0xC7, 0xA8, 1555 },
    { "?", 0xFF, 0xC7, 0x94, 156 },
    { "?", 0xFF, 0xA8, 0x82, 1565 },
    { "?", 0xFF, 0x91, 0x4D, 157 },
    { "?", 0xFF, 0x8C, 0x47, 1575 },
    { "?", 0xFF, 0x63, 0x08, 158 },
    { "?", 0xFF, 0x70, 0x1A, 1585 },
    { "?", 0xED, 0x51, 0x00, 159 },
    { "?", 0xF2, 0x63, 0x00, 1595 },
    { "?", 0xAD, 0x42, 0x00, 160 },
    { "?", 0xB3, 0x4F, 0x00, 1605 },
    { "?", 0x5C, 0x2C, 0x00, 161 },
    { "?", 0x91, 0x40, 0x00, 1615 },
    { "?", 0xFF, 0xD9, 0xC7, 162 },
    { "?", 0xFF, 0xB0, 0xA1, 1625 },
    { "?", 0xFF, 0xB0, 0x8F, 163 },
    { "?", 0xFF, 0x9C, 0x85, 1635 },
    { "?", 0xFF, 0x8A, 0x45, 164 },
    { "?", 0xFF, 0x82, 0x57, 1645 },
    { "?", 0xFF, 0x69, 0x0A, 165 },
    { "?", 0xFF, 0x5E, 0x17, 1655 },
    { "?", 0xFF, 0x5C, 0x00, 166 },
    { "?", 0xFF, 0x52, 0x00, 1665 },
    { "?", 0xD4, 0x55, 0x00, 167 },
    { "?", 0xB8, 0x3D, 0x00, 1675 },
    { "?", 0x69, 0x2D, 0x00, 168 },
    { "?", 0x8F, 0x2E, 0x00, 1685 },
    { "?", 0xFF, 0xCC, 0xCC, 169 },
    { "?", 0xFF, 0x99, 0x8F, 170 },
    { "?", 0xFF, 0x78, 0x52, 171 },
    { "?", 0xFF, 0x57, 0x1F, 172 },
    { "?", 0xF5, 0x4C, 0x00, 173 },
    { "?", 0xA3, 0x31, 0x00, 174 },
    { "?", 0x66, 0x24, 0x00, 175 },
    { "?", 0xFF, 0xBF, 0xD1, 176 },
    { "?", 0xFF, 0x9E, 0xC9, 1765 },
    { "?", 0xFF, 0xBA, 0xE0, 1767 },
    { "?", 0xFF, 0x8C, 0x99, 177 },
    { "?", 0xFF, 0x87, 0xB5, 1775 },
    { "?", 0xFF, 0x6B, 0xA3, 1777 },
    { "?", 0xFF, 0x69, 0x70, 178 },
    { "?", 0xFF, 0x54, 0x80, 1785 },
    { "?", 0xFF, 0x3D, 0x66, 1787 },
    { "?", 0xFF, 0x29, 0x1F, 1788 },
    { "?", 0xFF, 0x36, 0x00, 179 },
    { "?", 0xFF, 0x0F, 0x00, 1795 },
    { "?", 0xF5, 0x00, 0x02, 1797 },
    { "?", 0xE3, 0x30, 0x00, 180 },
    { "?", 0xC4, 0x12, 0x00, 1805 },
    { "?", 0xB8, 0x00, 0x07, 1807 },
    { "?", 0x87, 0x23, 0x00, 181 },
    { "?", 0x7D, 0x0C, 0x00, 1815 },
    { "?", 0x57, 0x09, 0x00, 1817 },
    { "?", 0xFF, 0xBD, 0xE6, 182 },
    { "?", 0xFF, 0x8A, 0xC9, 183 },
    { "?", 0xFF, 0x52, 0x96, 184 },
    { "?", 0xFF, 0x17, 0x3D, 185 },
    { "?", 0xF5, 0x00, 0x2F, 186 },
    { "?", 0xCC, 0x00, 0x2B, 187 },
    { "?", 0x80, 0x04, 0x00, 188 },
    { "?", 0xFF, 0xA1, 0xE6, 189 },
    { "?", 0xFF, 0xB8, 0xED, 1895 },
    { "?", 0xFF, 0x73, 0xC7, 190 },
    { "?", 0xFF, 0x96, 0xE8, 1905 },
    { "?", 0xFF, 0x3D, 0x9E, 191 },
    { "?", 0xFF, 0x4A, 0xCC, 1915 },
    { "?", 0xFF, 0x00, 0x52, 192 },
    { "?", 0xFF, 0x00, 0x73, 1925 },
    { "?", 0xDE, 0x00, 0x4B, 193 },
    { "?", 0xF2, 0x00, 0x68, 1935 },
    { "?", 0xAB, 0x00, 0x3E, 194 },
    { "?", 0xCF, 0x00, 0x5B, 1945 },
    { "?", 0x73, 0x00, 0x2E, 195 },
    { "?", 0xA1, 0x00, 0x40, 1955 },
    { "?", 0xFF, 0xBF, 0xF5, 196 },
    { "?", 0xFF, 0x8C, 0xE6, 197 },
    { "?", 0xFF, 0x38, 0xAB, 198 },
    { "?", 0xFF, 0x00, 0x61, 199 },
    { "?", 0xE0, 0x00, 0x53, 200 },
    { "?", 0xB5, 0x00, 0x43, 201 },
    { "?", 0x91, 0x00, 0x39, 202 },
    { "?", 0xFF, 0xA8, 0xF7, 203 },
    { "?", 0xFF, 0x6B, 0xF7, 204 },
    { "?", 0xFF, 0x29, 0xE8, 205 },
    { "?", 0xF7, 0x00, 0x99, 206 },
    { "?", 0xCF, 0x00, 0x76, 207 },
    { "?", 0xA1, 0x00, 0x67, 208 },
    { "?", 0x78, 0x00, 0x4F, 209 },
    { "?", 0xFF, 0x9C, 0xF0, 210 },
    { "?", 0xFF, 0x73, 0xEB, 211 },
    { "?", 0xFF, 0x47, 0xE3, 212 },
    { "?", 0xFF, 0x0D, 0xBA, 213 },
    { "?", 0xEB, 0x00, 0x9B, 214 },
    { "?", 0xBA, 0x00, 0x79, 215 },
    { "?", 0x82, 0x07, 0x4E, 216 },
    { "?", 0xFF, 0xB8, 0xFF, 217 },
    { "?", 0xFA, 0x63, 0xFF, 218 },
    { "?", 0xFC, 0x1F, 0xFF, 219 },
    { "?", 0xD4, 0x00, 0xB8, 220 },
    { "?", 0xB3, 0x00, 0x98, 221 },
    { "?", 0x69, 0x00, 0x5E, 222 },
    { "?", 0xFF, 0x8A, 0xFF, 223 },
    { "?", 0xFC, 0x5E, 0xFF, 224 },
    { "?", 0xFC, 0x2B, 0xFF, 225 },
    { "?", 0xFF, 0x00, 0xFF, 226 },
    { "?", 0xCF, 0x00, 0xC0, 227 },
    { "?", 0x96, 0x00, 0x90, 228 },
    { "?", 0x66, 0x00, 0x57, 229 },
    { "?", 0xFF, 0xA8, 0xFF, 230 },
    { "?", 0xFC, 0x7A, 0xFF, 231 },
    { "?", 0xF7, 0x54, 0xFF, 232 },
    { "?", 0xE3, 0x00, 0xFF, 233 },
    { "?", 0xB1, 0x00, 0xBD, 234 },
    { "?", 0x91, 0x00, 0x99, 235 },
    { "?", 0xFC, 0xB3, 0xFF, 236 },
    { "?", 0xFA, 0xBA, 0xFF, 2365 },
    { "?", 0xF7, 0x82, 0xFF, 237 },
    { "?", 0xE6, 0x6E, 0xFF, 2375 },
    { "?", 0xF0, 0x5E, 0xFF, 238 },
    { "?", 0xCF, 0x36, 0xFF, 2385 },
    { "?", 0xE3, 0x36, 0xFF, 239 },
    { "?", 0xBA, 0x0D, 0xFF, 2395 },
    { "?", 0xD1, 0x0F, 0xFF, 240 },
    { "?", 0xA8, 0x00, 0xFF, 2405 },
    { "?", 0xB6, 0x00, 0xFA, 241 },
    { "?", 0x9D, 0x00, 0xEB, 2415 },
    { "?", 0x75, 0x00, 0x82, 242 },
    { "?", 0x77, 0x00, 0xBD, 2425 },
    { "?", 0xF2, 0xB5, 0xFF, 243 },
    { "?", 0xE8, 0x9E, 0xFF, 244 },
    { "?", 0xDB, 0x78, 0xFF, 245 },
    { "?", 0xB5, 0x1A, 0xFF, 246 },
    { "?", 0xA3, 0x00, 0xFF, 247 },
    { "?", 0x96, 0x00, 0xFA, 248 },
    { "?", 0x6E, 0x00, 0xB8, 249 },
    { "?", 0xF2, 0xD1, 0xFF, 250 },
    { "?", 0xDE, 0x9C, 0xFF, 251 },
    { "?", 0xC2, 0x70, 0xFF, 252 },
    { "?", 0x91, 0x0D, 0xFF, 253 },
    { "?", 0x80, 0x00, 0xFF, 254 },
    { "?", 0x5E, 0x00, 0xBF, 255 },
    { "?", 0xED, 0xCC, 0xFF, 256 },
    { "?", 0xCF, 0xA6, 0xFF, 2562 },
    { "?", 0xC7, 0xAB, 0xFF, 2563 },
    { "?", 0xB5, 0xA3, 0xFF, 2567 },
    { "?", 0xDB, 0xA8, 0xFF, 257 },
    { "?", 0xB3, 0x87, 0xFF, 2572 },
    { "?", 0xB3, 0x91, 0xFF, 2573 },
    { "?", 0x99, 0x8C, 0xFF, 2577 },
    { "?", 0x91, 0x3D, 0xFF, 258 },
    { "?", 0x8A, 0x47, 0xFF, 2582 },
    { "?", 0x8A, 0x5E, 0xFF, 2583 },
    { "?", 0x69, 0x57, 0xFF, 2587 },
    { "?", 0x5F, 0x00, 0xD9, 259 },
    { "?", 0x66, 0x1A, 0xFF, 2592 },
    { "?", 0x63, 0x1C, 0xFF, 2593 },
    { "?", 0x26, 0x00, 0xFF, 2597 },
    { "?", 0x5B, 0x00, 0xBD, 260 },
    { "?", 0x5C, 0x00, 0xF7, 2602 },
    { "?", 0x4D, 0x00, 0xFA, 2603 },
    { "?", 0x2D, 0x00, 0xED, 2607 },
    { "?", 0x50, 0x00, 0x99, 261 },
    { "?", 0x4F, 0x00, 0xDB, 2612 },
    { "?", 0x50, 0x00, 0xD9, 2613 },
    { "?", 0x2E, 0x00, 0xD9, 2617 },
    { "?", 0x3F, 0x00, 0x73, 262 },
    { "?", 0x3C, 0x00, 0x8F, 2622 },
    { "?", 0x47, 0x00, 0xAD, 2623 },
    { "?", 0x28, 0x00, 0xB0, 2627 },
    { "?", 0xE6, 0xDB, 0xFF, 263 },
    { "?", 0xB8, 0xBA, 0xFF, 2635 },
    { "?", 0xBD, 0xB8, 0xFF, 264 },
    { "?", 0x99, 0xA3, 0xFF, 2645 },
    { "?", 0x75, 0x70, 0xFF, 265 },
    { "?", 0x75, 0x82, 0xFF, 2655 },
    { "?", 0x36, 0x1A, 0xFF, 266 },
    { "?", 0x61, 0x66, 0xFF, 2665 },
    { "?", 0x1C, 0x00, 0xFF, 267 },
    { "?", 0x28, 0x00, 0xE0, 268 },
    { "?", 0x09, 0x00, 0xE6, 2685 },
    { "?", 0x26, 0x00, 0xAB, 269 },
    { "?", 0x0C, 0x00, 0x82, 2695 },
    { "?", 0xB0, 0xBA, 0xFF, 270 },
    { "?", 0x99, 0xB3, 0xFF, 2705 },
    { "?", 0xCF, 0xE8, 0xFF, 2706 },
    { "?", 0xD4, 0xF0, 0xFF, 2707 },
    { "?", 0xBD, 0xE6, 0xFF, 2708 },
    { "?", 0x91, 0xA1, 0xFF, 271 },
    { "?", 0x6E, 0x8C, 0xFF, 2715 },
    { "?", 0x8C, 0xB5, 0xFF, 2716 },
    { "?", 0xB5, 0xE0, 0xFF, 2717 },
    { "?", 0x54, 0x96, 0xFF, 2718 },
    { "?", 0x6B, 0x85, 0xFF, 272 },
    { "?", 0x3B, 0x52, 0xFF, 2725 },
    { "?", 0x36, 0x57, 0xFF, 2726 },
    { "?", 0x4A, 0x94, 0xFF, 2727 },
    { "?", 0x0A, 0x4F, 0xFF, 2728 },
    { "?", 0x00, 0x09, 0xEB, 273 },
    { "?", 0x00, 0x0D, 0xFF, 2735 },
    { "?", 0x00, 0x17, 0xFF, 2736 },
    { "?", 0x00, 0x20, 0xFA, 2738 },
    { "?", 0x00, 0x00, 0xB8, 274 },
    { "?", 0x00, 0x0B, 0xD9, 2745 },
    { "?", 0x00, 0x12, 0xE6, 2746 },
    { "?", 0x00, 0x1E, 0xD9, 2747 },
    { "?", 0x00, 0x1A, 0xD9, 2748 },
    { "?", 0x03, 0x00, 0x91, 275 },
    { "?", 0x00, 0x05, 0xB3, 2755 },
    { "?", 0x00, 0x0B, 0xB5, 2756 },
    { "?", 0x00, 0x20, 0xB3, 2757 },
    { "?", 0x00, 0x26, 0xBD, 2758 },
    { "?", 0x02, 0x00, 0x73, 276 },
    { "?", 0x00, 0x04, 0x8C, 2765 },
    { "?", 0x00, 0x08, 0x87, 2766 },
    { "?", 0x00, 0x1A, 0x75, 2767 },
    { "?", 0x00, 0x1F, 0x8F, 2768 },
    { "?", 0xBA, 0xED, 0xFF, 277 },
    { "?", 0x9C, 0xDB, 0xFF, 278 },
    { "?", 0x52, 0xA8, 0xFF, 279 },
    { "?", 0x00, 0x3B, 0xD1, 280 },
    { "?", 0x00, 0x31, 0xAD, 281 },
    { "?", 0x00, 0x26, 0x75, 282 },
    { "?", 0xA6, 0xE8, 0xFF, 283 },
    { "?", 0x73, 0xCF, 0xFF, 284 },
    { "?", 0x1C, 0x91, 0xFF, 285 },
    { "?", 0x00, 0x55, 0xFA, 286 },
    { "?", 0x00, 0x48, 0xE0, 287 },
    { "?", 0x00, 0x41, 0xC4, 288 },
    { "?", 0x00, 0x24, 0x6B, 289 },
    { "?", 0xBF, 0xFA, 0xFF, 290 },
    { "?", 0x96, 0xFA, 0xFF, 2905 },
    { "?", 0xAB, 0xF7, 0xFF, 291 },
    { "?", 0x69, 0xED, 0xFF, 2915 },
    { "?", 0x82, 0xE3, 0xFF, 292 },
    { "?", 0x26, 0xC2, 0xFF, 2925 },
    { "?", 0x00, 0x6B, 0xFA, 293 },
    { "?", 0x00, 0x8A, 0xFF, 2935 },
    { "?", 0x00, 0x55, 0xC9, 294 },
    { "?", 0x00, 0x79, 0xDB, 2945 },
    { "?", 0x00, 0x45, 0xA1, 295 },
    { "?", 0x00, 0x58, 0xA1, 2955 },
    { "?", 0x00, 0x29, 0x4D, 296 },
    { "?", 0x00, 0x39, 0x5C, 2965 },
    { "?", 0x82, 0xFC, 0xFF, 297 },
    { "?", 0xB3, 0xFF, 0xF2, 2975 },
    { "?", 0x4F, 0xED, 0xFF, 298 },
    { "?", 0x69, 0xFF, 0xF0, 2985 },
    { "?", 0x26, 0xCF, 0xFF, 299 },
    { "?", 0x1A, 0xE3, 0xFF, 2995 },
    { "?", 0x00, 0x8F, 0xFF, 300 },
    { "?", 0x00, 0xA0, 0xFA, 3005 },
    { "?", 0x00, 0x73, 0xD1, 301 },
    { "?", 0x00, 0x89, 0xCC, 3015 },
    { "?", 0x00, 0x60, 0x80, 302 },
    { "?", 0x00, 0x68, 0x7D, 3025 },
    { "?", 0x00, 0x3B, 0x42, 303 },
    { "?", 0x00, 0x47, 0x44, 3035 },
    { "?", 0xB3, 0xFF, 0xEB, 304 },
    { "?", 0x7D, 0xFF, 0xE8, 305 },
    { "?", 0x40, 0xFF, 0xED, 306 },
    { "?", 0x00, 0x9C, 0xBA, 307 },
    { "?", 0x00, 0x80, 0x87, 308 },
    { "?", 0x00, 0x47, 0x41, 309 },
    { "?", 0x91, 0xFF, 0xE6, 310 },
    { "?", 0x91, 0xFF, 0xE0, 3105 },
    { "?", 0x5E, 0xFF, 0xE0, 311 },
    { "?", 0x5E, 0xFF, 0xD1, 3115 },
    { "?", 0x0A, 0xFF, 0xE3, 312 },
    { "?", 0x2B, 0xFF, 0xC9, 3125 },
    { "?", 0x00, 0xDE, 0xCC, 313 },
    { "?", 0x00, 0xE8, 0xC3, 3135 },
    { "?", 0x00, 0xB3, 0xA2, 314 },
    { "?", 0x00, 0xC4, 0x9F, 3145 },
    { "?", 0x00, 0x91, 0x80, 315 },
    { "?", 0x00, 0x9E, 0x78, 3155 },
    { "?", 0x00, 0x52, 0x3C, 316 },
    { "?", 0x00, 0x59, 0x40, 3165 },
    { "?", 0xD1, 0xFF, 0xEB, 317 },
    { "?", 0x9E, 0xFF, 0xD9, 318 },
    { "?", 0x7A, 0xFF, 0xCF, 319 },
    { "?", 0x00, 0xED, 0xA4, 320 },
    { "?", 0x00, 0xC4, 0x87, 321 },
    { "?", 0x00, 0xA6, 0x6F, 322 },
    { "?", 0x00, 0x87, 0x54, 323 },
    { "?", 0xB8, 0xFF, 0xE0, 324 },
    { "?", 0xA1, 0xFF, 0xD1, 3242 },
    { "?", 0xA8, 0xFF, 0xCF, 3245 },
    { "?", 0x91, 0xFF, 0xC2, 3248 },
    { "?", 0x70, 0xFF, 0xBD, 325 },
    { "?", 0x87, 0xFF, 0xC2, 3252 },
    { "?", 0x82, 0xFF, 0xB8, 3255 },
    { "?", 0x69, 0xFF, 0xAB, 3258 },
    { "?", 0x21, 0xFF, 0x9E, 326 },
    { "?", 0x4A, 0xFF, 0xAB, 3262 },
    { "?", 0x4F, 0xFF, 0xA1, 3265 },
    { "?", 0x1A, 0xFF, 0x82, 3268 },
    { "?", 0x00, 0xD4, 0x77, 327 },
    { "?", 0x00, 0xFF, 0x8F, 3272 },
    { "?", 0x0D, 0xFF, 0x87, 3275 },
    { "?", 0x00, 0xF2, 0x6D, 3278 },
    { "?", 0x00, 0xAD, 0x5F, 328 },
    { "?", 0x00, 0xD9, 0x75, 3282 },
    { "?", 0x00, 0xED, 0x77, 3285 },
    { "?", 0x00, 0xCC, 0x5E, 3288 },
    { "?", 0x00, 0x8A, 0x4A, 329 },
    { "?", 0x00, 0x8A, 0x46, 3292 },
    { "?", 0x00, 0xC9, 0x5F, 3295 },
    { "?", 0x00, 0x94, 0x40, 3298 },
    { "?", 0x00, 0x66, 0x35, 330 },
    { "?", 0x00, 0x4F, 0x24, 3302 },
    { "?", 0x00, 0x63, 0x27, 3305 },
    { "?", 0x00, 0x47, 0x1D, 3308 },
    { "?", 0xC2, 0xFF, 0xD6, 331 },
    { "?", 0xB3, 0xFF, 0xCC, 332 },
    { "?", 0x91, 0xFF, 0xBA, 333 },
    { "?", 0x00, 0xF7, 0x63, 334 },
    { "?", 0x00, 0xB3, 0x3E, 335 },
    { "?", 0x00, 0x87, 0x2D, 336 },
    { "?", 0xB0, 0xFF, 0xCC, 337 },
    { "?", 0xA6, 0xFF, 0xBF, 3375 },
    { "?", 0x87, 0xFF, 0xAD, 338 },
    { "?", 0x8C, 0xFF, 0xAB, 3385 },
    { "?", 0x29, 0xFF, 0x70, 339 },
    { "?", 0x63, 0xFF, 0x8C, 3395 },
    { "?", 0x00, 0xE8, 0x4F, 340 },
    { "?", 0x26, 0xFF, 0x59, 3405 },
    { "?", 0x00, 0xB5, 0x3C, 341 },
    { "?", 0x00, 0xC7, 0x2E, 3415 },
    { "?", 0x00, 0x91, 0x2A, 342 },
    { "?", 0x00, 0x94, 0x21, 3425 },
    { "?", 0x02, 0x63, 0x1C, 343 },
    { "?", 0x00, 0x57, 0x10, 3435 },
    { "?", 0xBA, 0xFF, 0xC4, 344 },
    { "?", 0x9E, 0xFF, 0xAD, 345 },
    { "?", 0x73, 0xFF, 0x87, 346 },
    { "?", 0x00, 0xF7, 0x23, 347 },
    { "?", 0x00, 0xC2, 0x1D, 348 },
    { "?", 0x00, 0x94, 0x0D, 349 },
    { "?", 0x0D, 0x40, 0x00, 350 },
    { "?", 0xD4, 0xFF, 0xD6, 351 },
    { "?", 0xBA, 0xFF, 0xBF, 352 },
    { "?", 0x9E, 0xFF, 0xA3, 353 },
    { "?", 0x33, 0xFF, 0x1A, 354 },
    { "?", 0x0F, 0xFF, 0x00, 355 },
    { "?", 0x09, 0xBA, 0x00, 356 },
    { "?", 0x16, 0x70, 0x00, 357 },
    { "?", 0xBA, 0xFF, 0x9E, 358 },
    { "?", 0xA3, 0xFF, 0x82, 359 },
    { "?", 0x6B, 0xFF, 0x33, 360 },
    { "?", 0x4F, 0xFF, 0x00, 361 },
    { "?", 0x46, 0xE8, 0x00, 362 },
    { "?", 0x3E, 0xC2, 0x00, 363 },
    { "?", 0x34, 0x94, 0x00, 364 },
    { "?", 0xE0, 0xFF, 0xB5, 365 },
    { "?", 0xCC, 0xFF, 0x8F, 366 },
    { "?", 0xAD, 0xFF, 0x69, 367 },
    { "?", 0x6E, 0xFF, 0x00, 368 },
    { "?", 0x61, 0xED, 0x00, 369 },
    { "?", 0x52, 0xBA, 0x00, 370 },
    { "?", 0x40, 0x70, 0x00, 371 },
    { "?", 0xE6, 0xFF, 0xAB, 372 },
    { "?", 0xD6, 0xFF, 0x8A, 373 },
    { "?", 0xC2, 0xFF, 0x6E, 374 },
    { "?", 0x96, 0xFF, 0x38, 375 },
    { "?", 0x74, 0xF2, 0x00, 376 },
    { "?", 0x6B, 0xC2, 0x00, 377 },
    { "?", 0x43, 0x66, 0x00, 378 },
    { "?", 0xE8, 0xFF, 0x6B, 379 },
    { "?", 0xDE, 0xFF, 0x47, 380 },
    { "?", 0xCC, 0xFF, 0x17, 381 },
    { "?", 0xB5, 0xFF, 0x00, 382 },
    { "?", 0xA5, 0xCF, 0x00, 383 },
    { "?", 0x90, 0xB0, 0x00, 384 },
    { "?", 0x68, 0x6B, 0x00, 385 },
    { "?", 0xF0, 0xFF, 0x70, 386 },
    { "?", 0xE6, 0xFF, 0x42, 387 },
    { "?", 0xDB, 0xFF, 0x36, 388 },
    { "?", 0xCC, 0xFF, 0x26, 389 },
    { "?", 0xB7, 0xEB, 0x00, 390 },
    { "?", 0x95, 0xAB, 0x00, 391 },
    { "?", 0x79, 0x82, 0x00, 392 },
    { "?", 0xF7, 0xFF, 0x73, 393 },
    { "?", 0xFC, 0xFF, 0x52, 3935 },
    { "?", 0xF0, 0xFF, 0x3D, 394 },
    { "?", 0xF7, 0xFF, 0x26, 3945 },
    { "?", 0xEB, 0xFF, 0x26, 395 },
    { "?", 0xF0, 0xFF, 0x00, 3955 },
    { "?", 0xE3, 0xFF, 0x0F, 396 },
    { "?", 0xEB, 0xFF, 0x00, 3965 },
    { "?", 0xCC, 0xE3, 0x00, 397 },
    { "?", 0xB5, 0xB5, 0x00, 3975 },
    { "?", 0xAB, 0xB8, 0x00, 398 },
    { "?", 0x96, 0x92, 0x00, 3985 },
    { "?", 0x91, 0x91, 0x00, 399 },
    { "?", 0x5C, 0x59, 0x00, 3995 },
    { "?", 0xD6, 0xD0, 0xC9, 400 },
    { "?", 0xC4, 0xBB, 0xAF, 401 },
    { "?", 0xB0, 0xA5, 0x97, 402 },
    { "?", 0x91, 0x87, 0x79, 403 },
    { "?", 0x70, 0x67, 0x58, 404 },
    { "?", 0x47, 0x40, 0x30, 405 },
    { "?", 0xD6, 0xCB, 0xC9, 406 },
    { "?", 0xBD, 0xAE, 0xAC, 407 },
    { "?", 0xA8, 0x97, 0x96, 408 },
    { "?", 0x8C, 0x7A, 0x77, 409 },
    { "?", 0x70, 0x5C, 0x59, 410 },
    { "?", 0x47, 0x34, 0x2E, 411 },
    { "?", 0x05, 0x04, 0x02, 412 },
    { "?", 0xCC, 0xCC, 0xBA, 413 },
    { "?", 0xB3, 0xB3, 0xA1, 414 },
    { "?", 0x96, 0x96, 0x84, 415 },
    { "?", 0x80, 0x80, 0x6B, 416 },
    { "?", 0x58, 0x59, 0x43, 417 },
    { "?", 0x3E, 0x40, 0x2C, 418 },
    { "?", 0x00, 0x00, 0x00, 419 },
    { "?", 0xD9, 0xD9, 0xD9, 420 },
    { "?", 0xBD, 0xBD, 0xBD, 421 },
    { "?", 0xAB, 0xAB, 0xAB, 422 },
    { "?", 0x8F, 0x8F, 0x8F, 423 },
    { "?", 0x63, 0x63, 0x63, 424 },
    { "?", 0x3B, 0x3B, 0x3B, 425 },
    { "?", 0x00, 0x00, 0x00, 426 },
    { "?", 0xE3, 0xE3, 0xE3, 427 },
    { "?", 0xCD, 0xD1, 0xD1, 428 },
    { "?", 0xA8, 0xAD, 0xAD, 429 },
    { "?", 0x85, 0x8C, 0x8C, 430 },
    { "?", 0x52, 0x5B, 0x5C, 431 },
    { "?", 0x2D, 0x39, 0x3B, 432 },
    { "?", 0x09, 0x0C, 0x0D, 433 },
    { "?", 0xED, 0xE6, 0xE8, 434 },
    { "?", 0xDE, 0xD6, 0xDB, 435 },
    { "?", 0xC2, 0xBF, 0xBF, 436 },
    { "?", 0x8A, 0x8C, 0x8A, 437 },
    { "?", 0x39, 0x45, 0x00, 438 },
    { "?", 0x29, 0x33, 0x00, 439 },
    { "?", 0x20, 0x27, 0x00, 440 },
    { "?", 0xDA, 0xE8, 0xD8, 441 },
    { "?", 0xBE, 0xCF, 0xBC, 442 },
    { "?", 0x9D, 0xB3, 0x9D, 443 },
    { "?", 0x7E, 0x94, 0x7E, 444 },
    { "?", 0x47, 0x59, 0x47, 445 },
    { "?", 0x32, 0x40, 0x31, 446 },
    { "?", 0x27, 0x2E, 0x20, 447 },
    { "?", 0x2D, 0x3E, 0x00, 448 },
    { "?", 0x4F, 0x3A, 0x00, 4485 },
    { "?", 0x3D, 0x52, 0x00, 449 },
    { "?", 0x8A, 0x6E, 0x07, 4495 },
    { "?", 0x50, 0x67, 0x00, 450 },
    { "?", 0xA3, 0x8B, 0x24, 4505 },
    { "?", 0xAB, 0xB5, 0x73, 451 },
    { "?", 0xC2, 0xB0, 0x61, 4515 },
    { "?", 0xC2, 0xCF, 0x9C, 452 },
    { "?", 0xD4, 0xC5, 0x81, 4525 },
    { "?", 0xDB, 0xE3, 0xBF, 453 },
    { "?", 0xE3, 0xDA, 0x9F, 4535 },
    { "?", 0xE8, 0xED, 0xD6, 454 },
    { "?", 0xF0, 0xE9, 0xC2, 4545 },
    { "?", 0x59, 0x4A, 0x00, 455 },
    { "?", 0x91, 0x7C, 0x00, 456 },
    { "?", 0xB8, 0x9C, 0x00, 457 },
    { "?", 0xE6, 0xE6, 0x45, 458 },
    { "?", 0xF0, 0xED, 0x73, 459 },
    { "?", 0xF5, 0xF2, 0x8F, 460 },
    { "?", 0xF7, 0xF7, 0xA6, 461 },
    { "?", 0x40, 0x26, 0x00, 462 },
    { "?", 0x36, 0x15, 0x00, 4625 },
    { "?", 0x6B, 0x3D, 0x00, 463 },
    { "?", 0x8F, 0x4A, 0x06, 4635 },
    { "?", 0x95, 0x53, 0x00, 464 },
    { "?", 0xB8, 0x74, 0x3B, 4645 },
    { "?", 0xCC, 0xAD, 0x6B, 465 },
    { "?", 0xD1, 0x9B, 0x73, 4655 },
    { "?", 0xE0, 0xC7, 0x91, 466 },
    { "?", 0xE6, 0xBC, 0x9C, 4665 },
    { "?", 0xE8, 0xD9, 0xA8, 467 },
    { "?", 0xF0, 0xD5, 0xBD, 4675 },
    { "?", 0xF0, 0xE8, 0xC4, 468 },
    { "?", 0xF5, 0xE4, 0xD3, 4685 },
    { "?", 0x4A, 0x1A, 0x00, 469 },
    { "?", 0x42, 0x0D, 0x00, 4695 },
    { "?", 0xAB, 0x48, 0x00, 470 },
    { "?", 0x82, 0x31, 0x26, 4705 },
    { "?", 0xD1, 0x56, 0x00, 471 },
    { "?", 0xA8, 0x62, 0x5D, 4715 },
    { "?", 0xFF, 0xA8, 0x7A, 472 },
    { "?", 0xBF, 0x82, 0x7C, 4725 },
    { "?", 0xFF, 0xC4, 0xA3, 473 },
    { "?", 0xD9, 0xA9, 0xA7, 4735 },
    { "?", 0xFF, 0xD9, 0xBD, 474 },
    { "?", 0xE6, 0xBE, 0xBC, 4745 },
    { "?", 0xFF, 0xE3, 0xCC, 475 },
    { "?", 0xF0, 0xD8, 0xD3, 4755 },
    { "?", 0x38, 0x1C, 0x00, 476 },
    { "?", 0x4F, 0x18, 0x00, 477 },
    { "?", 0x6B, 0x12, 0x00, 478 },
    { "?", 0xB0, 0x85, 0x73, 479 },
    { "?", 0xD9, 0xB5, 0xB0, 480 },
    { "?", 0xE8, 0xCF, 0xC9, 481 },
    { "?", 0xF2, 0xE0, 0xDE, 482 },
    { "?", 0x66, 0x07, 0x00, 483 },
    { "?", 0xB5, 0x09, 0x00, 484 },
    { "?", 0xFF, 0x0D, 0x00, 485 },
    { "?", 0xFF, 0x87, 0x96, 486 },
    { "?", 0xFF, 0xA6, 0xB8, 487 },
    { "?", 0xFF, 0xBD, 0xCF, 488 },
    { "?", 0xFF, 0xD9, 0xE3, 489 },
    { "?", 0x47, 0x13, 0x00, 490 },
    { "?", 0x7A, 0x1A, 0x00, 491 },
    { "?", 0x94, 0x22, 0x00, 492 },
    { "?", 0xF2, 0x83, 0xBB, 493 },
    { "?", 0xFF, 0xAB, 0xDE, 494 },
    { "?", 0xFF, 0xC2, 0xE3, 495 },
    { "?", 0xFF, 0xD6, 0xE8, 496 },
    { "?", 0x38, 0x11, 0x00, 497 },
    { "?", 0x33, 0x0E, 0x00, 4975 },
    { "?", 0x66, 0x25, 0x00, 498 },
    { "?", 0x85, 0x32, 0x41, 4985 },
    { "?", 0x85, 0x31, 0x00, 499 },
    { "?", 0xA8, 0x58, 0x68, 4995 },
    { "?", 0xE3, 0x8D, 0xB3, 500 },
    { "?", 0xC4, 0x7A, 0x8F, 5005 },
    { "?", 0xF7, 0xB5, 0xD7, 501 },
    { "?", 0xE3, 0xAA, 0xC1, 5015 },
    { "?", 0xFC, 0xCF, 0xE3, 502 },
    { "?", 0xED, 0xC2, 0xD1, 5025 },
    { "?", 0xFF, 0xE3, 0xEB, 503 },
    { "?", 0xF7, 0xDF, 0xE1, 5035 },
    { "?", 0x32, 0x00, 0x00, 504 },
    { "?", 0x60, 0x00, 0x00, 505 },
    { "?", 0x77, 0x00, 0x00, 506 },
    { "?", 0xDE, 0x82, 0xC4, 507 },
    { "?", 0xF2, 0xA3, 0xE3, 508 },
    { "?", 0xFF, 0xC2, 0xED, 509 },
    { "?", 0xFF, 0xD4, 0xF0, 510 },
    { "?", 0x3D, 0x00, 0x66, 511 },
    { "?", 0x2B, 0x00, 0x41, 5115 },
    { "?", 0x61, 0x00, 0xCE, 512 },
    { "?", 0x59, 0x24, 0x82, 5125 },
    { "?", 0x8A, 0x1F, 0xFF, 513 },
    { "?", 0x82, 0x57, 0xB8, 5135 },
    { "?", 0xD9, 0x80, 0xFF, 514 },
    { "?", 0xB3, 0x8C, 0xE0, 5145 },
    { "?", 0xED, 0x9E, 0xFF, 515 },
    { "?", 0xD4, 0xB3, 0xEB, 5155 },
    { "?", 0xF7, 0xBA, 0xFF, 516 },
    { "?", 0xE8, 0xCF, 0xF2, 5165 },
    { "?", 0xFF, 0xD1, 0xFF, 517 },
    { "?", 0xF2, 0xE0, 0xF7, 5175 },
    { "?", 0x2E, 0x00, 0x5C, 518 },
    { "?", 0x1C, 0x00, 0x22, 5185 },
    { "?", 0x44, 0x00, 0x9D, 519 },
    { "?", 0x3D, 0x0C, 0x4E, 5195 },
    { "?", 0x5C, 0x00, 0xE0, 520 },
    { "?", 0x7A, 0x5E, 0x85, 5205 },
    { "?", 0xBA, 0x87, 0xFF, 521 },
    { "?", 0xB5, 0x9E, 0xC2, 5215 },
    { "?", 0xD4, 0xA1, 0xFF, 522 },
    { "?", 0xD4, 0xBA, 0xD9, 5225 },
    { "?", 0xE6, 0xBD, 0xFF, 523 },
    { "?", 0xE6, 0xD4, 0xE6, 5235 },
    { "?", 0xF0, 0xD9, 0xFF, 524 },
    { "?", 0xF0, 0xE6, 0xED, 5245 },
    { "?", 0x27, 0x00, 0x85, 525 },
    { "?", 0x0D, 0x0B, 0x4D, 5255 },
    { "?", 0x3B, 0x00, 0xED, 526 },
    { "?", 0x20, 0x25, 0x8A, 5265 },
    { "?", 0x45, 0x00, 0xFF, 527 },
    { "?", 0x38, 0x48, 0xA8, 5275 },
    { "?", 0x96, 0x73, 0xFF, 528 },
    { "?", 0x72, 0x80, 0xC4, 5285 },
    { "?", 0xBD, 0x99, 0xFF, 529 },
    { "?", 0xA8, 0xB3, 0xE6, 5295 },
    { "?", 0xD1, 0xB0, 0xFF, 530 },
    { "?", 0xC7, 0xCE, 0xED, 5305 },
    { "?", 0xE6, 0xCC, 0xFF, 531 },
    { "?", 0xE4, 0xE4, 0xF2, 5315 },
    { "?", 0x00, 0x19, 0x3F, 532 },
    { "?", 0x00, 0x22, 0x7B, 533 },
    { "?", 0x00, 0x2C, 0xAA, 534 },
    { "?", 0x94, 0xB3, 0xED, 535 },
    { "?", 0xB0, 0xC7, 0xF2, 536 },
    { "?", 0xC7, 0xDB, 0xF7, 537 },
    { "?", 0xDE, 0xE8, 0xFA, 538 },
    { "?", 0x00, 0x27, 0x4D, 539 },
    { "?", 0x00, 0x22, 0x3D, 5395 },
    { "?", 0x00, 0x34, 0x73, 540 },
    { "?", 0x3A, 0x72, 0x8A, 5405 },
    { "?", 0x00, 0x44, 0x9E, 541 },
    { "?", 0x5A, 0x8A, 0x96, 5415 },
    { "?", 0x5E, 0xC1, 0xF7, 542 },
    { "?", 0x79, 0xA6, 0xAD, 5425 },
    { "?", 0x96, 0xE3, 0xFF, 543 },
    { "?", 0xB8, 0xCD, 0xD4, 5435 },
    { "?", 0xB3, 0xF0, 0xFF, 544 },
    { "?", 0xCC, 0xDC, 0xDE, 5445 },
    { "?", 0xC7, 0xF7, 0xFF, 545 },
    { "?", 0xDA, 0xE8, 0xE8, 5455 },
    { "?", 0x02, 0x27, 0x2B, 546 },
    { "?", 0x00, 0x2B, 0x24, 5463 },
    { "?", 0x00, 0x0D, 0x09, 5467 },
    { "?", 0x00, 0x34, 0x40, 547 },
    { "?", 0x16, 0x7A, 0x58, 5473 },
    { "?", 0x1D, 0x42, 0x30, 5477 },
    { "?", 0x00, 0x46, 0x5C, 548 },
    { "?", 0x43, 0xB0, 0x8B, 5483 },
    { "?", 0x48, 0x70, 0x5D, 5487 },
    { "?", 0x56, 0xAD, 0xBA, 549 },
    { "?", 0x73, 0xC9, 0xAD, 5493 },
    { "?", 0x82, 0x9E, 0x90, 5497 },
    { "?", 0x7B, 0xC1, 0xC9, 550 },
    { "?", 0x9C, 0xDB, 0xC5, 5503 },
    { "?", 0xA1, 0xB5, 0xA8, 5507 },
    { "?", 0xA2, 0xD7, 0xDE, 551 },
    { "?", 0xC7, 0xF2, 0xE1, 5513 },
    { "?", 0xBE, 0xD1, 0xC5, 5517 },
    { "?", 0xC5, 0xE8, 0xE8, 552 },
    { "?", 0xDC, 0xF7, 0xEB, 5523 },
    { "?", 0xD5, 0xE3, 0xDA, 5527 },
    { "?", 0x14, 0x33, 0x19, 553 },
    { "?", 0x10, 0x2E, 0x14, 5535 },
    { "?", 0x11, 0x54, 0x22, 554 },
    { "?", 0x32, 0x7A, 0x3D, 5545 },
    { "?", 0x18, 0x70, 0x31, 555 },
    { "?", 0x5A, 0x9E, 0x68, 5555 },
    { "?", 0x66, 0xBA, 0x80, 556 },
    { "?", 0x84, 0xBD, 0x8F, 5565 },
    { "?", 0x98, 0xD9, 0xAD, 557 },
    { "?", 0xA9, 0xD4, 0xB2, 5575 },
    { "?", 0xBA, 0xE8, 0xCA, 558 },
    { "?", 0xCA, 0xE6, 0xCC, 5585 },
    { "?", 0xCE, 0xF0, 0xD8, 559 },
    { "?", 0xDD, 0xED, 0xDA, 5595 },
    { "?", 0x0D, 0x40, 0x18, 560 },
    { "?", 0x05, 0x0F, 0x07, 5605 },
    { "?", 0x12, 0x7A, 0x38, 561 },
    { "?", 0x2E, 0x52, 0x2B, 5615 },
    { "?", 0x1A, 0xB0, 0x58, 562 },
    { "?", 0x5A, 0x7D, 0x57, 5625 },
    { "?", 0x79, 0xFC, 0xAC, 563 },
    { "?", 0x89, 0xA3, 0x86, 5635 },
    { "?", 0xA1, 0xFF, 0xCC, 564 },
    { "?", 0xAE, 0xBF, 0xA6, 5645 },
    { "?", 0xC4, 0xFF, 0xDE, 565 },
    { "?", 0xC5, 0xD1, 0xBE, 5655 },
    { "?", 0xDB, 0xFF, 0xE8, 566 },
    { "?", 0xDA, 0xE6, 0xD5, 5665 },
    { "?", 0x0E, 0x4D, 0x1C, 567 },
    { "?", 0x14, 0xA3, 0x46, 568 },
    { "?", 0x04, 0xD4, 0x5B, 569 },
    { "?", 0x85, 0xFF, 0xB5, 570 },
    { "?", 0xAD, 0xFF, 0xCF, 571 },
    { "?", 0xC4, 0xFF, 0xDB, 572 },
    { "?", 0xDB, 0xFF, 0xE8, 573 },
    { "?", 0x31, 0x4A, 0x0E, 574 },
    { "?", 0x1F, 0x2E, 0x07, 5743 },
    { "?", 0x24, 0x36, 0x00, 5747 },
    { "?", 0x3E, 0x78, 0x00, 575 },
    { "?", 0x3F, 0x54, 0x10, 5753 },
    { "?", 0x54, 0x73, 0x06, 5757 },
    { "?", 0x4F, 0x9C, 0x00, 576 },
    { "?", 0x5C, 0x6E, 0x1D, 5763 },
    { "?", 0x84, 0x9C, 0x32, 5767 },
    { "?", 0xAE, 0xE6, 0x7C, 577 },
    { "?", 0x90, 0x9E, 0x5A, 5773 },
    { "?", 0xA5, 0xB8, 0x5E, 5777 },
    { "?", 0xC0, 0xF0, 0x90, 578 },
    { "?", 0xAF, 0xBA, 0x86, 5783 },
    { "?", 0xCE, 0xDE, 0x99, 5787 },
    { "?", 0xCD, 0xF7, 0xA3, 579 },
    { "?", 0xC9, 0xD1, 0xA5, 5793 },
    { "?", 0xDC, 0xE8, 0xB0, 5797 },
    { "?", 0xDC, 0xFA, 0xB9, 580 },
    { "?", 0xDE, 0xE3, 0xC8, 5803 },
    { "?", 0xE9, 0xF0, 0xCE, 5807 },
    { "?", 0x46, 0x47, 0x00, 581 },
    { "?", 0x36, 0x36, 0x05, 5815 },
    { "?", 0x78, 0x8A, 0x00, 582 },
    { "?", 0x69, 0x66, 0x0E, 5825 },
    { "?", 0xA3, 0xD4, 0x00, 583 },
    { "?", 0x99, 0x96, 0x32, 5835 },
    { "?", 0xD3, 0xF0, 0x32, 584 },
    { "?", 0xB3, 0xB1, 0x5F, 5845 },
    { "?", 0xDE, 0xFA, 0x55, 585 },
    { "?", 0xD1, 0xD1, 0x90, 5855 },
    { "?", 0xE8, 0xFF, 0x78, 586 },
    { "?", 0xDE, 0xDE, 0xA6, 5865 },
    { "?", 0xF2, 0xFF, 0x99, 587 },
    { "?", 0xEB, 0xEB, 0xC0, 5875 },
    { "?", 0xFF, 0xFF, 0xB5, 600 },
    { "?", 0xFF, 0xFF, 0x99, 601 },
    { "?", 0xFF, 0xFF, 0x7D, 602 },
    { "?", 0xFC, 0xFC, 0x4E, 603 },
    { "?", 0xF7, 0xF7, 0x1E, 604 },
    { "?", 0xED, 0xE8, 0x00, 605 },
    { "?", 0xE0, 0xD7, 0x00, 606 },
    { "?", 0xFC, 0xFC, 0xCF, 607 },
    { "?", 0xFA, 0xFA, 0xAA, 608 },
    { "?", 0xF5, 0xF5, 0x84, 609 },
    { "?", 0xF0, 0xF0, 0x65, 610 },
    { "?", 0xE3, 0xE1, 0x12, 611 },
    { "?", 0xCC, 0xC8, 0x00, 612 },
    { "?", 0xB3, 0xAB, 0x00, 613 },
    { "?", 0xF5, 0xF5, 0xC4, 614 },
    { "?", 0xF0, 0xED, 0xAF, 615 },
    { "?", 0xE8, 0xE3, 0x97, 616 },
    { "?", 0xD4, 0xCF, 0x6E, 617 },
    { "?", 0xB3, 0xAD, 0x17, 618 },
    { "?", 0x91, 0x8C, 0x00, 619 },
    { "?", 0x78, 0x72, 0x00, 620 },
    { "?", 0xD9, 0xFA, 0xE1, 621 },
    { "?", 0xBA, 0xF5, 0xC6, 622 },
    { "?", 0x9C, 0xE6, 0xAE, 623 },
    { "?", 0x72, 0xCC, 0x85, 624 },
    { "?", 0x4B, 0xAB, 0x60, 625 },
    { "?", 0x17, 0x5E, 0x22, 626 },
    { "?", 0x04, 0x29, 0x0A, 627 },
    { "?", 0xCF, 0xFF, 0xF0, 628 },
    { "?", 0xA8, 0xFF, 0xE8, 629 },
    { "?", 0x87, 0xFF, 0xE3, 630 },
    { "?", 0x52, 0xFA, 0xDC, 631 },
    { "?", 0x13, 0xF2, 0xCE, 632 },
    { "?", 0x00, 0xBF, 0xAC, 633 },
    { "?", 0x00, 0x99, 0x8B, 634 },
    { "?", 0xAD, 0xFF, 0xEB, 635 },
    { "?", 0x8C, 0xFF, 0xE8, 636 },
    { "?", 0x73, 0xFF, 0xE8, 637 },
    { "?", 0x2B, 0xFF, 0xE6, 638 },
    { "?", 0x00, 0xF2, 0xE6, 639 },
    { "?", 0x00, 0xC7, 0xC7, 640 },
    { "?", 0x00, 0xAB, 0xB3, 641 },
    { "?", 0xD2, 0xF0, 0xFA, 642 },
    { "?", 0xB8, 0xE4, 0xF5, 643 },
    { "?", 0x8B, 0xCC, 0xF0, 644 },
    { "?", 0x64, 0xA7, 0xE8, 645 },
    { "?", 0x46, 0x96, 0xE3, 646 },
    { "?", 0x00, 0x56, 0xC4, 647 },
    { "?", 0x00, 0x2D, 0x75, 648 },
    { "?", 0xD9, 0xED, 0xFC, 649 },
    { "?", 0xBE, 0xE3, 0xFA, 650 },
    { "?", 0x95, 0xC5, 0xF0, 651 },
    { "?", 0x5C, 0x97, 0xE6, 652 },
    { "?", 0x00, 0x4E, 0xCC, 653 },
    { "?", 0x00, 0x39, 0x9E, 654 },
    { "?", 0x00, 0x2B, 0x7A, 655 },
    { "?", 0xDB, 0xF5, 0xFF, 656 },
    { "?", 0xC2, 0xEB, 0xFF, 657 },
    { "?", 0x96, 0xCC, 0xFF, 658 },
    { "?", 0x5C, 0xA6, 0xFF, 659 },
    { "?", 0x1A, 0x6E, 0xFF, 660 },
    { "?", 0x00, 0x48, 0xE8, 661 },
    { "?", 0x00, 0x3B, 0xD1, 662 },
    { "?", 0xED, 0xF0, 0xFF, 663 },
    { "?", 0xE3, 0xE8, 0xFF, 664 },
    { "?", 0xC8, 0xCF, 0xFA, 665 },
    { "?", 0xA4, 0xA6, 0xED, 666 },
    { "?", 0x69, 0x70, 0xDB, 667 },
    { "?", 0x3E, 0x40, 0xB3, 668 },
    { "?", 0x20, 0x1E, 0x87, 669 },
    { "?", 0xFF, 0xDE, 0xFF, 670 },
    { "?", 0xFC, 0xCC, 0xFF, 671 },
    { "?", 0xF7, 0xA8, 0xFF, 672 },
    { "?", 0xF0, 0x82, 0xFF, 673 },
    { "?", 0xE8, 0x54, 0xFF, 674 },
    { "?", 0xCD, 0x00, 0xF7, 675 },
    { "?", 0xBB, 0x00, 0xC7, 676 },
    { "?", 0xFA, 0xDE, 0xFF, 677 },
    { "?", 0xF7, 0xC9, 0xFF, 678 },
    { "?", 0xF2, 0xBA, 0xFF, 679 },
    { "?", 0xE1, 0x8E, 0xFA, 680 },
    { "?", 0xC1, 0x5F, 0xF5, 681 },
    { "?", 0xA8, 0x2F, 0xE0, 682 },
    { "?", 0x81, 0x00, 0x91, 683 },
    { "?", 0xFA, 0xCF, 0xFA, 684 },
    { "?", 0xF7, 0xBA, 0xF7, 685 },
    { "?", 0xF2, 0xAA, 0xF2, 686 },
    { "?", 0xDC, 0x7E, 0xE0, 687 },
    { "?", 0xC4, 0x59, 0xCF, 688 },
    { "?", 0x9D, 0x27, 0xA8, 689 },
    { "?", 0x69, 0x03, 0x69, 690 },
    { "?", 0xFC, 0xD7, 0xE8, 691 },
    { "?", 0xFA, 0xC0, 0xE1, 692 },
    { "?", 0xF0, 0xA8, 0xD3, 693 },
    { "?", 0xE6, 0x83, 0xBA, 694 },
    { "?", 0xBF, 0x50, 0x8A, 695 },
    { "?", 0x99, 0x18, 0x46, 696 },
    { "?", 0x7D, 0x09, 0x25, 697 },
    { "?", 0xFF, 0xD6, 0xEB, 698 },
    { "?", 0xFF, 0xC2, 0xE6, 699 },
    { "?", 0xFF, 0xA3, 0xDB, 700 },
    { "?", 0xFF, 0x78, 0xCC, 701 },
    { "?", 0xF2, 0x4B, 0xA0, 702 },
    { "?", 0xD6, 0x24, 0x63, 703 },
    { "?", 0xBA, 0x00, 0x25, 704 },
    { "?", 0xFF, 0xE8, 0xF2, 705 },
    { "?", 0xFF, 0xD4, 0xE6, 706 },
    { "?", 0xFF, 0xB3, 0xDB, 707 },
    { "?", 0xFF, 0x8A, 0xC7, 708 },
    { "?", 0xFF, 0x57, 0x9E, 709 },
    { "?", 0xFF, 0x36, 0x6B, 710 },
    { "?", 0xFA, 0x00, 0x32, 711 },
    { "?", 0xFF, 0xDB, 0xB0, 712 },
    { "?", 0xFF, 0xCF, 0x96, 713 },
    { "?", 0xFF, 0xB8, 0x75, 714 },
    { "?", 0xFF, 0xA1, 0x4A, 715 },
    { "?", 0xFF, 0x87, 0x17, 716 },
    { "?", 0xFA, 0x70, 0x00, 717 },
    { "?", 0xEB, 0x63, 0x00, 718 },
    { "?", 0xFF, 0xE6, 0xBF, 719 },
    { "?", 0xFC, 0xD7, 0xA7, 720 },
    { "?", 0xF7, 0xBC, 0x77, 721 },
    { "?", 0xE8, 0x95, 0x38, 722 },
    { "?", 0xD4, 0x74, 0x0B, 723 },
    { "?", 0xA1, 0x4C, 0x00, 724 },
    { "?", 0x82, 0x3B, 0x00, 725 },
    { "?", 0xFA, 0xE6, 0xC0, 726 },
    { "?", 0xF2, 0xCE, 0xA0, 727 },
    { "?", 0xE6, 0xB5, 0x77, 728 },
    { "?", 0xD1, 0x90, 0x52, 729 },
    { "?", 0xB5, 0x6E, 0x2B, 730 },
    { "?", 0x75, 0x37, 0x00, 731 },
    { "?", 0x5C, 0x28, 0x00, 732 },
    { "?", 0xFF, 0xF5, 0xD1, 7401 },
    { "?", 0xFF, 0xF0, 0xB3, 7402 },
    { "?", 0xFF, 0xE6, 0x80, 7403 },
    { "?", 0xFF, 0xE8, 0x33, 7404 },
    { "?", 0xFF, 0xE6, 0x00, 7405 },
    { "?", 0xFF, 0xD1, 0x00, 7406 },
    { "?", 0xE3, 0xB1, 0x22, 7407 },
    { "?", 0xFF, 0xBF, 0x0D, 7408 },
    { "?", 0xFF, 0xB3, 0x0D, 7409 },
    { "?", 0xFF, 0xB3, 0x73, 7410 },
    { "?", 0xFF, 0xA6, 0x4F, 7411 },
    { "?", 0xED, 0x8A, 0x00, 7412 },
    { "?", 0xF5, 0x73, 0x00, 7413 },
    { "?", 0xE3, 0x7B, 0x00, 7414 },
    { "?", 0xFF, 0xD1, 0xD9, 7415 },
    { "?", 0xFF, 0x66, 0x66, 7416 },
    { "?", 0xFF, 0x40, 0x40, 7417 },
    { "?", 0xF2, 0x49, 0x61, 7418 },
    { "?", 0xD1, 0x54, 0x73, 7419 },
    { "?", 0xCC, 0x29, 0x76, 7420 },
    { "?", 0x63, 0x00, 0x46, 7421 },
    { "?", 0xFF, 0xE8, 0xF2, 7422 },
    { "?", 0xFF, 0x73, 0xC7, 7423 },
    { "?", 0xFF, 0x40, 0xB3, 7424 },
    { "?", 0xED, 0x18, 0xA6, 7425 },
    { "?", 0xD1, 0x00, 0x73, 7426 },
    { "?", 0xB8, 0x00, 0x40, 7427 },
    { "?", 0x73, 0x17, 0x3F, 7428 },
    { "?", 0xFF, 0xD1, 0xF7, 7429 },
    { "?", 0xFA, 0xB0, 0xFF, 7430 },
    { "?", 0xF2, 0x96, 0xED, 7431 },
    { "?", 0xE6, 0x67, 0xDF, 7432 },
    { "?", 0xD9, 0x36, 0xB8, 7433 },
    { "?", 0xCC, 0x29, 0xAD, 7434 },
    { "?", 0xA6, 0x00, 0x95, 7435 },
    { "?", 0xF7, 0xEB, 0xFF, 7436 },
    { "?", 0xF0, 0xCC, 0xFF, 7437 },
    { "?", 0xD9, 0xA6, 0xFF, 7438 },
    { "?", 0xCC, 0xA6, 0xFF, 7439 },
    { "?", 0xB3, 0x99, 0xFF, 7440 },
    { "?", 0xA3, 0x80, 0xFF, 7441 },
    { "?", 0x80, 0x4D, 0xFF, 7442 },
    { "?", 0xF0, 0xF2, 0xFF, 7443 },
    { "?", 0xCC, 0xD4, 0xFF, 7444 },
    { "?", 0xAD, 0xC6, 0xF7, 7445 },
    { "?", 0x91, 0x9E, 0xFF, 7446 },
    { "?", 0x53, 0x57, 0xCF, 7447 },
    { "?", 0x4E, 0x43, 0x73, 7448 },
    { "?", 0x27, 0x00, 0x20, 7449 },
    { "?", 0xCC, 0xE6, 0xFF, 7450 },
    { "?", 0x99, 0xC9, 0xFF, 7451 },
    { "?", 0x80, 0xAD, 0xFF, 7452 },
    { "?", 0x80, 0xBD, 0xFF, 7453 },
    { "?", 0x73, 0xAE, 0xE6, 7454 },
    { "?", 0x33, 0x78, 0xFF, 7455 },
    { "?", 0x6B, 0x9A, 0xED, 7456 },
    { "?", 0xE0, 0xFF, 0xFA, 7457 },
    { "?", 0x90, 0xF0, 0xE4, 7458 },
    { "?", 0x5F, 0xDE, 0xD1, 7459 },
    { "?", 0x00, 0xF2, 0xF2, 7460 },
    { "?", 0x38, 0xB8, 0xFF, 7461 },
    { "?", 0x00, 0x73, 0xE6, 7462 },
    { "?", 0x00, 0x33, 0x59, 7463 },
    { "?", 0xBF, 0xFF, 0xE6, 7464 },
    { "?", 0x80, 0xFF, 0xBF, 7465 },
    { "?", 0x4D, 0xFF, 0xC4, 7466 },
    { "?", 0x0D, 0xFF, 0xBF, 7467 },
    { "?", 0x00, 0xA5, 0xB8, 7468 },
    { "?", 0x00, 0x7A, 0x99, 7469 },
    { "?", 0x1C, 0x77, 0x8C, 7470 },
    { "?", 0xB8, 0xFF, 0xDB, 7471 },
    { "?", 0x7A, 0xFF, 0xBF, 7472 },
    { "?", 0x46, 0xEB, 0x91, 7473 },
    { "?", 0x14, 0xC7, 0x8F, 7474 },
    { "?", 0x59, 0xB3, 0x86, 7475 },
    { "?", 0x00, 0x66, 0x3A, 7476 },
    { "?", 0x10, 0x52, 0x49, 7477 },
    { "?", 0xD1, 0xFF, 0xDB, 7478 },
    { "?", 0x73, 0xFF, 0x80, 7479 },
    { "?", 0x66, 0xFF, 0x80, 7480 },
    { "?", 0x66, 0xFF, 0x73, 7481 },
    { "?", 0x33, 0xFF, 0x40, 7482 },
    { "?", 0x11, 0x73, 0x00, 7483 },
    { "?", 0x00, 0x80, 0x13, 7484 },
    { "?", 0xF0, 0xFF, 0xE6, 7485 },
    { "?", 0xCC, 0xFF, 0xB3, 7486 },
    { "?", 0xB3, 0xFF, 0x8C, 7487 },
    { "?", 0x91, 0xFF, 0x66, 7488 },
    { "?", 0x5F, 0xED, 0x2F, 7489 },
    { "?", 0x5B, 0xA6, 0x21, 7490 },
    { "?", 0x68, 0x99, 0x00, 7491 },
    { "?", 0xD1, 0xED, 0x77, 7492 },
    { "?", 0xC5, 0xE6, 0x93, 7493 },
    { "?", 0xA3, 0xD9, 0x82, 7494 },
    { "?", 0x86, 0xB3, 0x24, 7495 },
    { "?", 0x5F, 0x9E, 0x00, 7496 },
    { "?", 0x73, 0x86, 0x39, 7497 },
    { "?", 0x26, 0x33, 0x00, 7498 },
    { "?", 0xFF, 0xFA, 0xD9, 7499 },
    { "?", 0xF7, 0xF2, 0xD2, 7500 },
    { "?", 0xF0, 0xE6, 0xC0, 7501 },
    { "?", 0xE6, 0xD3, 0x95, 7502 },
    { "?", 0xBF, 0xA8, 0x7C, 7503 },
    { "?", 0x99, 0x73, 0x54, 7504 },
    { "?", 0x73, 0x50, 0x22, 7505 },
    { "?", 0xFF, 0xF2, 0xD9, 7506 },
    { "?", 0xFF, 0xE6, 0xB3, 7507 },
    { "?", 0xF5, 0xD0, 0x93, 7508 },
    { "?", 0xF2, 0xC2, 0x79, 7509 },
    { "?", 0xE3, 0x9F, 0x40, 7510 },
    { "?", 0xBF, 0x69, 0x00, 7511 },
    { "?", 0xAB, 0x5C, 0x00, 7512 },
    { "?", 0xF7, 0xCB, 0xB2, 7513 },
    { "?", 0xF2, 0xB8, 0x96, 7514 },
    { "?", 0xE0, 0x92, 0x70, 7515 },
    { "?", 0xA6, 0x50, 0x00, 7516 },
    { "?", 0x8F, 0x39, 0x00, 7517 },
    { "?", 0x66, 0x3D, 0x2E, 7518 },
    { "?", 0x42, 0x35, 0x00, 7519 },
    { "?", 0xFF, 0xD6, 0xCF, 7520 },
    { "?", 0xE6, 0xAC, 0xB8, 7521 },
    { "?", 0xD6, 0x81, 0x96, 7522 },
    { "?", 0xCC, 0x7A, 0x85, 7523 },
    { "?", 0xBA, 0x54, 0x4A, 7524 },
    { "?", 0xB3, 0x62, 0x59, 7525 },
    { "?", 0xA6, 0x3A, 0x00, 7526 },
    { "?", 0xED, 0xE8, 0xDF, 7527 },
    { "?", 0xE6, 0xDF, 0xCF, 7528 },
    { "?", 0xD4, 0xCB, 0xBA, 7529 },
    { "?", 0xAD, 0xA0, 0x89, 7530 },
    { "?", 0x80, 0x73, 0x5D, 7531 },
    { "?", 0x59, 0x4A, 0x2D, 7532 },
    { "?", 0x26, 0x1E, 0x06, 7533 },
    { "?", 0xE6, 0xE1, 0xD3, 7534 },
    { "?", 0xCC, 0xC6, 0xAD, 7535 },
    { "?", 0xAD, 0xA6, 0x87, 7536 },
    { "?", 0xC6, 0xCC, 0xB8, 7537 },
    { "?", 0xA2, 0xB3, 0x9B, 7538 },
    { "?", 0xA0, 0xA3, 0x95, 7539 },
    { "?", 0x47, 0x47, 0x47, 7540 },
    { "?", 0xED, 0xF2, 0xF2, 7541 },
    { "?", 0xC1, 0xD6, 0xD0, 7542 },
    { "?", 0xA6, 0xB3, 0xB3, 7543 },
    { "?", 0x8A, 0x97, 0x99, 7544 },
    { "?", 0x49, 0x5C, 0x5E, 7545 },
    { "?", 0x30, 0x45, 0x47, 7546 },
    { "?", 0x0A, 0x0F, 0x0F, 7547 },
#endif
    { "END", 0, 0, 0, -1 }
};

/* Based on the manufacturer table at 
 *   https://help.brother-usa.com/app/answers/detail/a_id/75245/~/thread-color-conversion-chart
 * using a colour picker.
 */
static thread_color RobisonAnton_Polyester_codes[] = {
    { "Black", 0x00, 0x00, 0x00, 5596 },
    { "White", 0xFF, 0xFF, 0xFF, 5597 },
    /* unfinished */
    { "END", 0, 0, 0, -1 }
};

static thread_color RobisonAnton_Rayon_codes[] = {
#if !ARDUINO
    { "Light Pink", 0xEF, 0xCC, 0xCE, 2243 },
    { "Pink", 0xFC, 0xBF, 0xC9, 2223 },
    { "Pink Bazaar", 0xEF, 0xC6, 0xD3, 2599 },
    { "Pink Mist", 0xF9, 0xB2, 0xB7, 2373 },
    { "Emily Pink", 0xF9, 0xAF, 0xAD, 2374 },
    { "Rose", 0xFC, 0x9B, 0xB2, 2293 },
    { "Rose Cerise", 0xFC, 0x8C, 0x99, 2244 },
    { "Carnation", 0xF2, 0xAF, 0xC1, 2237 },
    { "Shrimp", 0xE5, 0x56, 0x6D, 2246 },
    { "Bashful Pink", 0xF4, 0x47, 0x6B, 2248 },
    { "Begonia", 0xE5, 0x56, 0x6D, 2228 },
    { "Azalea", 0xF9, 0x84, 0x8E, 2412 },
    { "Dusty Rose", 0xF2, 0x68, 0x77, 2375 },
    { "Rose Tint", 0xD8, 0x89, 0x9B, 2591 },
    { "Burgundy", 0x8C, 0x26, 0x33, 2249 },
    { "TH Burgundy", 0x7C, 0x21, 0x28, 2608 },
    { "Russet", 0x7A, 0x26, 0x38, 2252 },
    { "Pro Firebrand", 0x75, 0x26, 0x3D, 2622 },
    { "Wine", 0x77, 0x2D, 0x35, 2225 },
    { "Intense Maroon", 0x59, 0x33, 0x44, 2587 },
    { "Dark Maroon", 0x4F, 0x21, 0x3A, 2376 },
    { "Carbernet", 0x93, 0x16, 0x38, 2494 },
    { "Mountain Rose", 0xF9, 0xB2, 0xB7, 2495 },
    { "Warm Wine", 0x66, 0x1E, 0x2B, 2496 },
    { "Primrose", 0xE5, 0x56, 0x6D, 2491 },
    { "Perfect Ruby", 0x8E, 0x23, 0x44, 2497 },
    { "Brushed Burgundy", 0x6D, 0x21, 0x3F, 2498 },
    { "Passion Rose", 0x8E, 0x23, 0x44, 2499 },
    { "New Berry", 0xAD, 0x00, 0x75, 2500 },
    { "Petal Pink", 0xFC, 0xC9, 0xC6, 2501 },
    { "Memphis Belle", 0xF4, 0xBF, 0xD1, 2502 },
    { "Desert Bloom", 0xF7, 0xBF, 0xBF, 2503 },
    { "Wild Pink", 0xCE, 0x00, 0x7C, 2259 },
    { "Floral Pink", 0xED, 0x72, 0xAA, 2415 },
    { "Hot Pink", 0xD3, 0x6B, 0x9E, 2260 },
    { "Crimson", 0xD6, 0x02, 0x70, 2416 },
    { "Ruby Glint", 0xE2, 0x28, 0x82, 2261 },
    { "Cherrystone", 0xAA, 0x00, 0x4F, 2504 },
    { "Cherry Punch", 0xAA, 0x00, 0x4F, 2417 },
    { "Cherry Blossom", 0xEA, 0x0F, 0x6B, 2262 },
    { "Red Berry", 0xAF, 0x1E, 0x2D, 2418 },
    { "Jockey Red", 0xBF, 0x0A, 0x30, 2281 },
    { "Very Red", 0xBF, 0x0A, 0x30, 2419 },
    { "Red Berry", 0xBF, 0x0A, 0x30, 2378 },
    { "Foxy Red", 0xCE, 0x11, 0x26, 2263 },
    { "Tuxedo Red", 0xD6, 0x28, 0x28, 2420 },
    { "Lipstick", 0xBF, 0x0A, 0x30, 2233 },
    { "Scarlet", 0xC4, 0x1E, 0x3A, 2219 },
    { "Radiant Red", 0xC4, 0x1E, 0x3A, 2266 },
    { "Wildfire", 0xA3, 0x26, 0x38, 2267 },
    { "Carolina Red", 0x8C, 0x26, 0x33, 2268 },
    { "Red Jubilee", 0x75, 0x26, 0x3D, 2421 },
    { "Cranberry", 0x99, 0x21, 0x35, 2270 },
    { "Antique Red", 0xA3, 0x26, 0x38, 2505 },
    { "Devil Red", 0xC4, 0x1E, 0x3A, 2506 },
    { "Rosewood", 0xD8, 0x1C, 0x3F, 2508 },
    { "Bitteroot", 0xFC, 0x5E, 0x72, 2509 },
    { "Bisque", 0xF2, 0xC4, 0xAF, 2377 },
    { "Flesh", 0xF4, 0xCC, 0xAA, 2413 },
    { "Flesh Pink", 0xF9, 0xBA, 0xAA, 2253 },
    { "Opal Mist", 0xF7, 0xBF, 0xBF, 2255 },
    { "Candy Apple Red", 0xAF, 0x00, 0x3D, 2507 },
    { "Tawny", 0xF9, 0xBF, 0x9E, 2256 },
    { "Peach", 0xF9, 0xC6, 0xAA, 2257 },
    { "Melon", 0xF9, 0x8E, 0x6D, 2294 },
    { "Flamingo", 0xF9, 0xA5, 0x8C, 2258 },
    { "Coral", 0xF9, 0x89, 0x72, 2414 },
    { "Persimmon", 0xF4, 0x3F, 0x4F, 2277 },
    { "Peach Blossom", 0xF9, 0xC6, 0xAA, 2510 },
    { "Illusion", 0xF9, 0xBA, 0xAA, 2511 },
    { "Melonade", 0xF9, 0x89, 0x72, 2512 },
    { "Honeysuckle", 0xE2, 0x3D, 0x28, 2513 },
    { "Brite Jade", 0x00, 0x8C, 0x82, 2514 },
    { "Bluestone", 0x00, 0xB2, 0xA0, 2515 },
    { "Aqua Pearl", 0x47, 0xD6, 0xC1, 2516 },
    { "Seafrost", 0x87, 0xDD, 0xD1, 2517 },
    { "J. Turquoise", 0x00, 0x87, 0x89, 2492 },
    { "Indian Ocean Blue", 0x2D, 0xC6, 0xD6, 2518 },
    { "Surf Blue", 0x00, 0xA5, 0xDB, 2519 },
    { "Mid Windsor", 0x00, 0xA3, 0xDD, 2520 },
    { "Deep Windsor", 0x00, 0x3F, 0x54, 2589 },
    { "Pro Dark Blue", 0x00, 0x2D, 0x47, 2620 },
    { "Mallard Blue", 0x00, 0x6D, 0x75, 2521 },
    { "Sky Blue", 0x9B, 0xC4, 0xE2, 2239 },
    { "Lake Blue", 0xAF, 0xBC, 0xDB, 2304 },
    { "Pro Lusty Blue", 0x5B, 0x77, 0xCC, 2614 },
    { "Slate Blue", 0x6D, 0x87, 0xA8, 2275 },
    { "Blue Frost", 0x99, 0xD6, 0xDD, 2305 },
    { "Periwinkle", 0x28, 0xC4, 0xD8, 2306 },
    { "Aquamarine", 0x00, 0xAD, 0xC6, 2307 },
    { "California Blue", 0x00, 0xA0, 0xC4, 2389 },
    { "Baltic Blue", 0x00, 0x8E, 0xD6, 2441 },
    { "Solar Blue", 0x00, 0x54, 0xA0, 2442 },
    { "Pacific Blue", 0x00, 0x8E, 0xD6, 2388 },
    { "Boo Boo Blue", 0x00, 0xA3, 0xDD, 2730 },
    { "Pro Band Blue", 0x00, 0x70, 0x9E, 2737 },
    { "Pro Peacock", 0x00, 0x7A, 0xA5, 2740 },
    { "Light Blue", 0xC9, 0xE8, 0xDD, 2222 },
    { "Royal", 0x1E, 0x1C, 0x77, 2210 },
    { "Blue Suede", 0x00, 0x2B, 0x7F, 2438 },
    { "Imperial Blue", 0x33, 0x56, 0x87, 2302 },
    { "Bridgeport Blue", 0xAF, 0xBC, 0xDB, 2522 },
    { "China Blue", 0x33, 0x56, 0x87, 2523 },
    { "Pro Imperial", 0x26, 0x54, 0x7C, 2612 },
    { "Country Blue", 0x77, 0x96, 0xB2, 2524 },
    { "Heron Blue", 0xC1, 0xC9, 0xDD, 2525 },
    { "Pro Saxon", 0x77, 0x96, 0xB2, 2624 },
    { "Bright Blue", 0x66, 0x89, 0xCC, 2526 },
    { "Soldier Blue", 0x59, 0x60, 0xA8, 2527 },
    { "Pro Brilliance", 0x00, 0x51, 0xBA, 2619 },
    { "Atlantis Blue", 0x66, 0x89, 0xCC, 2528 },
    { "Dolphin Blue", 0x3A, 0x75, 0xC4, 2529 },
    { "Caribbean Blue", 0x75, 0xAA, 0xDB, 2530 },
    { "Dana Blue", 0xC4, 0xD8, 0xE2, 2531 },
    { "Cadet Blue", 0xC4, 0xD8, 0xE2, 2532 },
    { "Ozone", 0x60, 0xAF, 0xDD, 2533 },
    { "Salem Blue", 0x00, 0x3D, 0x6B, 2534 },
    { "Blue Ribbon", 0x0F, 0x2B, 0x5B, 2439 },
    { "Pro Navy", 0x19, 0x21, 0x68, 2625 },
    { "Blue Ink", 0x2B, 0x26, 0x5B, 2440 },
    { "Pro Midnight", 0x00, 0x26, 0x54, 2613 },
    { "Pro College Blue", 0x00, 0x26, 0x49, 2647 },
    { "Light Midnight", 0x35, 0x3F, 0x5B, 2386 },
    { "Fleet Blue", 0x35, 0x26, 0x4F, 2450 },
    { "Light Navy", 0x11, 0x21, 0x51, 2303 },
    { "Flag Blue", 0x14, 0x21, 0x3D, 2603 },
    { "TH Navy", 0x00, 0x26, 0x54, 2609 },
    { "Navy", 0x14, 0x21, 0x3D, 2215 },
    { "Midnight Navy", 0x14, 0x21, 0x3D, 2387 },
    { "Pastel Blue", 0xC6, 0xD1, 0xD6, 2382 },
    { "Blue Hint", 0xC1, 0xC9, 0xDD, 2598 },
    { "Ice Blue", 0xB5, 0xD1, 0xE8, 2300 },
    { "Paris Blue", 0xD1, 0xCE, 0xDD, 2283 },
    { "Baby Blue", 0x99, 0xBA, 0xDD, 2206 },
    { "Sun Blue", 0xAF, 0xBC, 0xDB, 2269 },
    { "Cristy Blue", 0xA5, 0xBA, 0xE0, 2383 },
    { "Ultra Blue", 0x75, 0xB2, 0xDD, 2433 },
    { "Tropic Blue", 0x75, 0xAA, 0xDB, 2434 },
    { "Blue Horizon", 0x66, 0x89, 0xCC, 2435 },
    { "Oriental Blue", 0x7F, 0x8C, 0xBF, 2301 },
    { "Copen", 0x6D, 0x87, 0xA8, 2245 },
    { "Jay Blue", 0x5B, 0x77, 0xCC, 2384 },
    { "Blue", 0x2D, 0x33, 0x8E, 2220 },
    { "Sapphire", 0x2D, 0x33, 0x8E, 2280 },
    { "Pro Royal", 0x00, 0x33, 0x7F, 2627 },
    { "Fire Blue", 0x00, 0x38, 0x93, 2436 },
    { "Jamie Blue", 0x2D, 0x33, 0x8E, 2385 },
    { "Empire Blue", 0x3F, 0x28, 0x93, 2437 },
    { "Enchanted Sea", 0x3A, 0x56, 0x4F, 2535 },
    { "Pro Twinkle", 0x84, 0x99, 0xA5, 2617 },
    { "Rockport Blue", 0x9B, 0xAA, 0xBF, 2536 },
    { "Wonder Blue", 0x5E, 0x99, 0xAA, 2577 },
    { "Traditional Gray", 0xAD, 0xAF, 0xAA, 2540 },
    { "Steel", 0xBF, 0xBA, 0xAF, 2537 },
    { "Pro Pearl", 0xBA, 0xB7, 0xAF, 2741 },
    { "Pro Cool Gray", 0xC4, 0xC1, 0xBA, 2733 },
    { "Stainless Steel", 0xCC, 0xC1, 0xB2, 2538 },
    { "Chrome", 0xD1, 0xCC, 0xBF, 2539 },
    { "Pro Night Sky", 0xAD, 0xAF, 0xAA, 2618 },
    { "Gull", 0x8C, 0x89, 0x84, 2731 },
    { "Mineral", 0x68, 0x66, 0x63, 2729 },
    { "Black Chrome", 0x44, 0x3D, 0x38, 2541 },
    { "Heather", 0xDD, 0xC6, 0xC4, 2271 },
    { "Grape", 0xD3, 0xB7, 0xA3, 2272 },
    { "Satin Wine", 0xB5, 0x93, 0x9B, 2314 },
    { "Ducky Mauve", 0x8E, 0x68, 0x77, 2422 },
    { "Pale Orchid", 0xFC, 0xBF, 0xC9, 2423 },
    { "Orchid", 0xE5, 0xBF, 0xC6, 2379 },
    { "Lavender", 0xEF, 0xC6, 0xD3, 2276 },
    { "Violet", 0xED, 0xC4, 0xDD, 2285 },
    { "Cachet", 0xB5, 0x8C, 0xB2, 2424 },
    { "Tulip", 0xC9, 0xAD, 0xD8, 2286 },
    { "Mid Lilac", 0xE2, 0x9E, 0xD6, 2588 },
    { "Port Wine", 0x51, 0x26, 0x54, 2600 },
    { "Pro Maroon", 0x51, 0x2D, 0x44, 2616 },
    { "Laurie Lilac", 0x8E, 0x47, 0xAD, 2425 },
    { "Iris", 0xAF, 0x72, 0xC1, 2288 },
    { "Raspberry", 0x9B, 0x4F, 0x96, 2426 },
    { "Mulberry", 0x66, 0x11, 0x6D, 2380 },
    { "Plum Wine", 0x63, 0x30, 0x5E, 2490 },
    { "Purple Twist", 0x1E, 0x1C, 0x77, 2429 },
    { "Violet Blue", 0x33, 0x28, 0x75, 2427 },
    { "Purple Maze", 0x35, 0x00, 0x6D, 2428 },
    { "Pro Brite Star", 0x2B, 0x11, 0x66, 2736 },
    { "Pro Violet", 0x38, 0x19, 0x7A, 2742 },
    { "Pro Purple", 0x35, 0x00, 0x6D, 2628 },
    { "Purple", 0x8E, 0x47, 0xAD, 2254 },
    { "Purple Shadow", 0x5B, 0x02, 0x7A, 2430 },
    { "Dark Purple", 0x4C, 0x14, 0x5E, 2381 },
    { "Mauve", 0x89, 0x77, 0xBA, 2287 },
    { "Purple Accent", 0x44, 0x23, 0x5E, 2431 },
    { "Hot Peony", 0xAA, 0x00, 0x66, 2590 },
    { "Passion", 0xCE, 0x00, 0x7C, 2291 },
    { "Strawberry", 0xAA, 0x00, 0x4F, 2432 },
    { "Plum", 0x9E, 0x23, 0x87, 2292 },
    { "Misty", 0x5E, 0x99, 0xAA, 2308 },
    { "Mystic Teal", 0x60, 0x91, 0x91, 2443 },
    { "Teal", 0x60, 0x91, 0x91, 2309 },
    { "Dark Teal", 0x00, 0x3F, 0x54, 2444 },
    { "Mint Julep", 0x93, 0xDD, 0xDB, 2310 },
    { "Turquoise", 0x7F, 0xD6, 0xDB, 2204 },
    { "M.D. Green", 0x00, 0x72, 0x72, 2445 },
    { "Seafoam", 0x70, 0xCE, 0x9B, 2311 },
    { "Isle Green", 0x70, 0xCE, 0x9B, 2312 },
    { "Peppermint", 0x35, 0xC4, 0xAF, 2390 },
    { "Oceanic Green", 0x00, 0x6D, 0x75, 2446 },
    { "Pro Teal", 0x00, 0x6B, 0x77, 2621 },
    { "Garden Green", 0x00, 0x66, 0x63, 2447 },
    { "Pro Green", 0x00, 0x6D, 0x66, 2735 },
    { "Pine Green", 0x00, 0x8C, 0x82, 2391 },
    { "Greenstone", 0x00, 0x82, 0x72, 2448 },
    { "Fern Green", 0x00, 0x66, 0x63, 2449 },
    { "Pro Hunter", 0x00, 0x6D, 0x66, 2615 },
    { "Palm Leaf", 0xBC, 0xC1, 0xB2, 2241 },
    { "Flite Green", 0xC6, 0xD6, 0xA0, 2282 },
    { "Willow", 0x9E, 0xAA, 0x99, 2221 },
    { "Sprite", 0xB2, 0xD8, 0xD8, 2313 },
    { "Moss", 0x7A, 0xA8, 0x91, 2278 },
    { "Wintergreen", 0x7A, 0xA8, 0x91, 2594 },
    { "Green Forest", 0x00, 0x60, 0x56, 2451 },
    { "Pro Forest", 0x00, 0x60, 0x56, 2743 },
    { "Harbor Green", 0x4F, 0x6D, 0x5E, 2392 },
    { "Evergreen", 0x02, 0x49, 0x30, 2315 },
    { "Pro Dark Green", 0x00, 0x44, 0x38, 2734 },
    { "Lizzy Lime", 0x2B, 0x4C, 0x3F, 2631 },
    { "D.H. Green", 0x28, 0x2D, 0x26, 2411 },
    { "Celery", 0xF2, 0xEA, 0xBC, 2316 },
    { "Pistachio", 0xCC, 0xC6, 0x93, 2250 },
    { "Olive Drab", 0x5E, 0x66, 0x3A, 2317 },
    { "Olive", 0x77, 0x91, 0x82, 2202 },
    { "Pale Green", 0xC9, 0xE8, 0xDD, 2318 },
    { "Green Pearl", 0x93, 0xDD, 0xDB, 2452 },
    { "Sea Mist", 0x93, 0xDD, 0xDB, 2393 },
    { "Mint", 0xB5, 0xE8, 0xBF, 2238 },
    { "Spruce", 0xAA, 0xDD, 0x6D, 2279 },
    { "Nile", 0xA0, 0xDB, 0x8E, 2211 },
    { "Green Oak", 0xB5, 0xCC, 0x8E, 2319 },
    { "Erin Green", 0x8C, 0xD6, 0x00, 2320 },
    { "Pro Erin", 0x56, 0xAA, 0x1C, 2738 },
    { "Emerald", 0x33, 0x9E, 0x35, 2214 },
    { "Dark Emerald", 0x00, 0x7A, 0x3D, 2453 },
    { "Light Kelly", 0x00, 0x7A, 0x3D, 2410 },
    { "Kelly", 0x00, 0x7A, 0x3D, 2240 },
    { "Dark Green", 0x00, 0x87, 0x51, 2208 },
    { "Fleece Green", 0x00, 0x6B, 0x3F, 2454 },
    { "TH Green", 0x00, 0x68, 0x54, 2607 },
    { "Harvest Green", 0x1E, 0xB5, 0x3A, 2578 },
    { "Vibrant Green", 0x00, 0x9E, 0x49, 2579 },
    { "Green Grass", 0x00, 0x9E, 0x49, 2580 },
    { "Deep Green", 0x00, 0x6B, 0x3F, 2284 },
    { "Green Bay", 0x00, 0x6B, 0x54, 2455 },
    { "Jungle Green", 0x00, 0x7C, 0x66, 2597 },
    { "Peapod", 0xA3, 0xAF, 0x07, 2456 },
    { "Pastoral Green", 0x7F, 0xBA, 0x00, 2321 },
    { "Green Dust", 0x7F, 0xBA, 0x00, 2457 },
    { "Ming", 0x7F, 0xBA, 0x00, 2322 },
    { "Meadow", 0x56, 0x8E, 0x14, 2226 },
    { "Tamarack", 0x93, 0x99, 0x05, 2230 },
    { "Palmetto", 0x56, 0x63, 0x14, 2229 },
    { "Green Petal", 0x02, 0x49, 0x30, 2458 },
    { "Sage", 0x54, 0x77, 0x30, 2595 },
    { "Hedge", 0x3F, 0x49, 0x26, 2601 },
    { "Green", 0x3A, 0x77, 0x28, 2209 },
    { "Green Sail", 0x19, 0x38, 0x33, 2459 },
    { "Holly", 0x21, 0x5B, 0x33, 2323 },
    { "Field Green", 0x26, 0x51, 0x42, 2460 },
    { "Dress Green", 0x3F, 0x49, 0x26, 2584 },
    { "Foliage Green", 0x99, 0x84, 0x0A, 2542 },
    { "Autumn Green", 0xA3, 0x82, 0x05, 2543 },
    { "Desert Cactus", 0x89, 0x77, 0x19, 2544 },
    { "Cypress", 0x70, 0x70, 0x14, 2545 },
    { "Crescent Moon", 0x84, 0x82, 0x05, 2546 },
    { "Pebblestone", 0xE2, 0xE5, 0x84, 2547 },
    { "Sun Shadow", 0x99, 0x8E, 0x07, 2548 },
    { "Blue Spruce", 0x00, 0x49, 0x4F, 2549 },
    { "Newport", 0x4F, 0x6D, 0x5E, 2550 },
    { "Spring Garden", 0x77, 0x91, 0x82, 2551 },
    { "Water Lilly", 0x54, 0x68, 0x56, 2554 },
    { "Ivy", 0x0C, 0x30, 0x26, 2552 },
    { "Dark Army Green", 0x23, 0x3A, 0x2D, 2553 },
    { "Army Green", 0x21, 0x3D, 0x30, 2728 },
    { "Pastel Green", 0xC9, 0xD6, 0xA3, 2555 },
    { "Pollen Gold", 0xE0, 0xAA, 0x0F, 2556 },
    { "Pale Yellow", 0xF4, 0xE2, 0x87, 2557 },
    { "Buttercup", 0xFF, 0xC6, 0x1E, 2558 },
    { "Tusk", 0xF7, 0xE8, 0xAA, 2559 },
    { "Moonbeam", 0xF9, 0xDD, 0x16, 2560 },
    { "Black Eyed Susie", 0xC6, 0xA0, 0x0C, 2561 },
    { "Bullion", 0xA3, 0x7F, 0x14, 2562 },
    { "Chinese Yellow", 0xF7, 0xE8, 0xAA, 2324 },
    { "Maize", 0xF7, 0xE8, 0xAA, 2264 },
    { "Wheat", 0xEA, 0xDD, 0x96, 2461 },
    { "Pro Maize", 0xF9, 0xE0, 0x8C, 2732 },
    { "Glow", 0xFF, 0xD8, 0x7F, 2234 },
    { "Star Gold", 0xFC, 0xD8, 0x56, 2408 },
    { "Mango", 0xFC, 0xA3, 0x11, 2394 },
    { "Yellow Mist", 0xFC, 0xA3, 0x11, 2409 },
    { "Yellow", 0xFC, 0xA3, 0x11, 2213 },
    { "Sunflower", 0xF9, 0xDD, 0x16, 2462 },
    { "Lemon", 0xF4, 0xED, 0x47, 2325 },
    { "Daffodil", 0xF9, 0xE8, 0x14, 2326 },
    { "Merit Gold", 0xFC, 0xB5, 0x14, 2463 },
    { "Cornsilk", 0xFF, 0xCC, 0x49, 2395 },
    { "Nectar", 0xFF, 0xC6, 0x1E, 2464 },
    { "Scholastic", 0xFC, 0xBF, 0x49, 2465 },
    { "Canary Yellow", 0xFC, 0xE0, 0x16, 2235 },
    { "Pro Gold", 0xFF, 0xC6, 0x1E, 2626 },
    { "Manila", 0xFC, 0xD1, 0x16, 2466 },
    { "Goldenrod", 0xFC, 0xD1, 0x16, 2242 },
    { "Brite Yellow", 0xFF, 0xCC, 0x49, 2396 },
    { "Honeydew", 0xF9, 0x9B, 0x0C, 2327 },
    { "Pumpkin", 0xF7, 0x7F, 0x00, 2328 },
    { "Orangeade", 0xF7, 0x49, 0x02, 2467 },
    { "Sun Orange", 0xF7, 0x49, 0x02, 2397 },
    { "Paprika", 0xF9, 0x56, 0x02, 2236 },
    { "Saffron", 0xF9, 0x3F, 0x26, 2329 },
    { "Tex Orange", 0xF9, 0x56, 0x02, 2468 },
    { "Orange", 0xF9, 0x6B, 0x07, 2218 },
    { "Dark Tex Orange", 0xF9, 0x63, 0x02, 2469 },
    { "Old Dark Tex Orange", 0xA5, 0x3F, 0x0F, 2581 },
    { "Golden Poppy", 0xFC, 0x87, 0x44, 2330 },
    { "Rust", 0xBC, 0x4F, 0x07, 2289 },
    { "Copper", 0xAF, 0x75, 0x05, 2295 },
    { "Light Bronze", 0xC1, 0x8E, 0x60, 2493 },
    { "Visor Gold", 0xFC, 0xCE, 0x87, 2398 },
    { "Goldenlite", 0xFF, 0xCC, 0x49, 2605 },
    { "Honey", 0xFC, 0xBA, 0x5E, 2247 },
    { "Marigold", 0xFF, 0xCC, 0x49, 2216 },
    { "Mustard", 0xE0, 0xAA, 0x0F, 2331 },
    { "Sun Gold", 0xE0, 0xAA, 0x0F, 2212 },
    { "Karat", 0xE0, 0xAA, 0x0F, 2470 },
    { "Penny", 0xF2, 0xBF, 0x49, 2332 },
    { "New Gold", 0xFC, 0xCE, 0x87, 2399 },
    { "Pro Beige", 0xE2, 0xD6, 0xB5, 2630 },
    { "Marine Gold", 0xC6, 0xA0, 0x0C, 2596 },
    { "Ginger", 0xA3, 0x7F, 0x14, 2333 },
    { "Shimmering Gold", 0xC6, 0xA0, 0x0C, 2471 },
    { "Old Gold", 0xBF, 0x91, 0x0C, 2201 },
    { "Salmon", 0xEA, 0xB2, 0xB2, 2299 },
    { "Dark Rust", 0xC1, 0x38, 0x28, 2205 },
    { "Terra Cotta", 0xA0, 0x30, 0x33, 2334 },
    { "Pro Red", 0xAF, 0x1E, 0x2D, 2623 },
    { "Auburn", 0xAF, 0x1E, 0x2D, 2472 },
    { "Bone", 0xFA, 0xE6, 0xCC, 2582 },
    { "Ivory", 0xFA, 0xE6, 0xCF, 2335 },
    { "Opaline", 0xF7, 0xD3, 0xB5, 2473 },
    { "Ecru", 0xED, 0xD3, 0xBC, 2232 },
    { "Wicker", 0xAA, 0x75, 0x3F, 2489 },
    { "Tan", 0xD3, 0xA8, 0x7C, 2273 },
    { "Cottage Beige", 0xED, 0xD3, 0xB5, 2593 },
    { "Rattan", 0xC1, 0xA8, 0x75, 2474 },
    { "Gold", 0xE2, 0xBF, 0x9B, 2203 },
    { "Mocha Cream", 0xD3, 0xA8, 0x7C, 2475 },
    { "Topaz", 0xBF, 0x91, 0x0C, 2400 },
    { "Ashley Gold", 0xD1, 0x8E, 0x54, 2401 },
    { "Amber Beige", 0xD8, 0xB5, 0x96, 2336 },
    { "Seashell", 0xD6, 0xCC, 0xAF, 2476 },
    { "Light Maize", 0xF2, 0xE3, 0xC4, 2604 },
    { "Beige", 0xAA, 0x75, 0x3F, 2224 },
    { "Sand Dune", 0x6B, 0x47, 0x14, 2477 },
    { "Taupe", 0xD1, 0xBF, 0x91, 2298 },
    { "Pro Brown", 0x6C, 0x46, 0x3D, 2610 },
    { "Chocolate", 0x87, 0x60, 0x28, 2227 },
    { "Pro Walnut", 0x75, 0x54, 0x26, 2629 },
    { "Light Cocoa", 0x75, 0x54, 0x26, 2478 },
    { "Cocoa Mulch", 0xB2, 0x82, 0x60, 2488 },
    { "Brown", 0x59, 0x3D, 0x2B, 2251 },
    { "Dark Brown", 0x59, 0x3D, 0x2B, 2372 },
    { "Espresso", 0x3F, 0x30, 0x2B, 2337 },
    { "Bamboo", 0xC1, 0x8E, 0x60, 2338 },
    { "Almond", 0xAF, 0x75, 0x05, 2479 },
    { "Toast", 0xBA, 0x75, 0x30, 2231 },
    { "Sienna", 0x75, 0x54, 0x26, 2402 },
    { "K.A. Bronze", 0xB2, 0x6B, 0x70, 2480 },
    { "Pro Cinnamon", 0xA2, 0x46, 0x4E, 2611 },
    { "Date", 0x9B, 0x4F, 0x19, 2290 },
    { "Hazel", 0x9B, 0x4F, 0x19, 2481 },
    { "Coffee Bean", 0x5B, 0x2D, 0x28, 2339 },
    { "Dogwood", 0x59, 0x3D, 0x2B, 2563 },
    { "Mahogany", 0x3F, 0x30, 0x2B, 2564 },
    { "Best Brown", 0x3D, 0x30, 0x28, 2566 },
    { "Mushroom", 0x63, 0x3A, 0x11, 2567 },
    { "Perfect Tan", 0xC1, 0xA8, 0x75, 2568 },
    { "Earthen Tan", 0x7A, 0x5B, 0x11, 2569 },
    { "Golden Tan", 0xC1, 0xA8, 0x75, 2570 },
    { "14 Kt. Gold", 0xF2, 0xBF, 0x49, 2586 },
    { "TH Gold", 0xF2, 0xCE, 0x68, 2606 },
    { "24 Kt. Gold", 0xD8, 0x8C, 0x02, 2602 },
    { "Platinum", 0xC1, 0xB5, 0xA5, 2571 },
    { "Pro Gray", 0x99, 0x89, 0x7C, 2739 },
    { "Grayrod", 0xAD, 0xA0, 0x7A, 2572 },
    { "Pewter", 0xAD, 0xA0, 0x7A, 2573 },
    { "Aspen White", 0xF5, 0xE3, 0xCC, 2574 },
    { "Dark Taupe", 0x66, 0x59, 0x4C, 2575 },
    { "Egyptian Brown", 0x49, 0x35, 0x33, 2576 },
    { "Oyster", 0xF5, 0xEB, 0xE0, 2403 },
    { "Gray", 0xDD, 0xC6, 0xC4, 2207 },
    { "Pearl Gray", 0xDB, 0xD3, 0xD3, 2340 },
    { "Steel Gray", 0xD8, 0xCC, 0xD1, 2274 },
    { "Skylight", 0xCC, 0xC1, 0xC6, 2482 },
    { "Cloud", 0xAF, 0xAA, 0xA3, 2483 },
    { "Silver Steel", 0xAD, 0xAF, 0xAA, 2592 },
    { "Banner Gray", 0x91, 0x96, 0x93, 2585 },
    { "Silvery Gray", 0x8C, 0x89, 0x84, 2484 },
    { "Cinder", 0xCC, 0xC1, 0xC6, 2404 },
    { "Saturn Gray", 0xDB, 0xD3, 0xD3, 2485 },
    { "Dover Gray", 0xCC, 0xC1, 0xC6, 2405 },
    { "Storm Gray", 0xB2, 0xA8, 0xB5, 2486 },
    { "Sterling", 0xA8, 0x93, 0xAD, 2406 },
    { "Metal", 0x66, 0x6D, 0x70, 2407 },
    { "Twilight", 0x68, 0x66, 0x63, 2217 },
    { "Aged Charcoal", 0x44, 0x3D, 0x38, 2565 },
    { "Charcoal", 0x77, 0x77, 0x72, 2265 },
    { "Smokey", 0x35, 0x38, 0x42, 2487 },
    { "Ash", 0x3A, 0x49, 0x72, 2341 },
    { "Black", 0x1C, 0x26, 0x30, 2296 },
    { "Snow White", 0xF5, 0xEB, 0xE0, 2297 },
    { "Natural White", 0xF5, 0xED, 0xDE, 2342 },
    { "Eggshell", 0xF0, 0xE8, 0xD6, 2343 },
    { "Jet Black", 0x1C, 0x26, 0x30, 2632 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Sigma_Polyester_codes[] = {
#if !ARDUINO
    { "White", 0xFF, 0xFF, 0xFF, 10 },
    { "Black", 0x00, 0x00, 0x00, 20 },
    { "Light Neon Green", 0xED, 0xFF, 0x50, 21 },
    { "Neon Green", 0x96, 0xE8, 0x45, 32 },
    { "Light Neon Orange", 0xFF, 0xE7, 0x56, 33 },
    { "Med Neon Orange", 0xFF, 0x78, 0x24, 43 },
    { "Neon Pink", 0xF2, 0x8D, 0xA6, 46 },
    { "Neon Orange Pink", 0xC7, 0x0C, 0x57, 47 },
    { "Silver", 0xE2, 0x2D, 0x2A, 101 },
    { "Silver Diamond", 0xB8, 0xB8, 0xB8, 102 },
    { "Lava Stone", 0x88, 0x91, 0x86, 112 },
    { "Medium Grey", 0x73, 0x7F, 0x7F, 115 },
    { "Dark Platinum", 0x56, 0x5E, 0x5A, 116 },
    { "Charcoal", 0x51, 0x52, 0x50, 117 },
    { "Badger Grey", 0x78, 0x76, 0x68, 118 },
    { "Pumpkin Orange", 0xED, 0x57, 0x2F, 135 },
    { "Turquoise", 0x2E, 0xA5, 0x9C, 138 },
    { "Dark Wedgewood", 0x39, 0x62, 0x76, 142 },
    { "Cardinal Red", 0x9B, 0x3B, 0x40, 213 },
    { "Maroon", 0x6C, 0x3E, 0x47, 216 },
    { "Rust", 0xBA, 0x6E, 0x4D, 253 },
    { "Medium Rust", 0xBB, 0x3D, 0x2E, 255 },
    { "Natural Pink", 0xF9, 0xDF, 0xCF, 301 },
    { "Baby Pink", 0xFB, 0xDE, 0xD6, 303 },
    { "Piggy Pink", 0xF7, 0xCD, 0xD5, 304 },
    { "Sweet Pink", 0xF2, 0xAF, 0xB4, 305 },
    { "Blushing Pink", 0xE8, 0x41, 0x8C, 307 },
    { "Pink", 0xE7, 0x7F, 0x9D, 309 },
    { "Rose Pink", 0xF0, 0x6F, 0x8C, 313 },
    { "Green", 0x00, 0x83, 0x40, 317 },
    { "Shocking Pink", 0xDF, 0x99, 0xB6, 321 },
    { "Ruby", 0x82, 0x00, 0x52, 325 },
    { "Garnet", 0xB1, 0x41, 0x5F, 333 },
    { "Light Purple", 0xC3, 0x94, 0xAE, 345 },
    { "Medium Purple", 0xA8, 0x6E, 0x91, 347 },
    { "Dark Grape", 0x69, 0x41, 0x69, 348 },
    { "Pastel Light Pink", 0xE6, 0xCF, 0xD5, 376 },
    { "Light Baby Blue", 0xA8, 0xBE, 0xD7, 379 },
    { "Crystal Blue", 0xA0, 0xBF, 0xD7, 380 },
    { "Very Light Lavender", 0x90, 0xA6, 0xC6, 381 },
    { "Cornflower", 0x8F, 0xAF, 0xC6, 382 },
    { "Lavender", 0xB1, 0xB8, 0xD3, 383 },
    { "Denim", 0x41, 0x6C, 0x9B, 385 },
    { "Light Violet", 0x7D, 0x77, 0xAF, 386 },
    { "Misty Rose", 0xFA, 0xDA, 0xF4, 387 },
    { "Grape", 0x66, 0x40, 0x90, 390 },
    { "Lt. Weathered Blue", 0xEA, 0xF0, 0xF9, 402 },
    { "Baby Blue", 0xA6, 0xD8, 0xF6, 403 },
    { "Med Baby Blue", 0x7B, 0x9C, 0xB0, 404 },
    { "Med Pastel Blue", 0x64, 0x8D, 0xC7, 406 },
    { "Blue Raspberry", 0x3D, 0x6A, 0xA1, 409 },
    { "Med Royal Blue", 0x2D, 0x44, 0x91, 413 },
    { "Ocean Blue", 0x14, 0x3D, 0x7A, 414 },
    { "Med Navy", 0x11, 0x32, 0x63, 415 },
    { "Dark Navy", 0x0E, 0x1F, 0x38, 423 },
    { "Bright Sunshine", 0x0E, 0x1F, 0x38, 432 },
    { "Teal", 0x00, 0x91, 0xA5, 443 },
    { "Deep Teal", 0x00, 0x5B, 0x63, 448 },
    { "Dark Teal", 0x00, 0x47, 0x4D, 449 },
    { "Old Gold", 0xE5, 0xB1, 0x5C, 466 },
    { "Cream", 0xD5, 0xBF, 0x9B, 501 },
    { "Pale Salmon", 0xFF, 0xD0, 0x85, 503 },
    { "Med Peach", 0xF6, 0xB0, 0x8E, 505 },
    { "Pink Salmon", 0xB3, 0xE8, 0x51, 506 },
    { "Dark Peach", 0xF1, 0xA2, 0x36, 508 },
    { "Dark Brown", 0x6E, 0x43, 0x37, 513 },
    { "Pale Red", 0xD8, 0x49, 0x3E, 527 },
    { "Heron Blue", 0x69, 0x76, 0x98, 541 },
    { "Pale Yellow", 0xFD, 0xE8, 0x96, 601 },
    { "Pastel Yellow", 0xED, 0xE5, 0x5D, 602 },
    { "Golden Puppy", 0xDF, 0xA2, 0x00, 609 },
    { "Buttercup", 0xFD, 0xE8, 0x96, 612 },
    { "Treasure Gold", 0xCE, 0xB2, 0x4C, 616 },
    { "Old Gold", 0xAD, 0x95, 0x3E, 619 },
    { "Pale Apricot", 0xFE, 0xF9, 0xEA, 627 },
    { "Tan", 0xBD, 0x95, 0x65, 628 },
    { "Mellow Yellow", 0xFD, 0xF7, 0x6C, 632 },
    { "Lemon", 0xED, 0xEF, 0x05, 633 },
    { "Amber", 0xF8, 0xC3, 0x00, 646 },
    { "Mandarina", 0xE7, 0x78, 0x17, 649 },
    { "Orange", 0xE6, 0x65, 0x35, 650 },
    { "Golden Rod", 0xC6, 0x96, 0x32, 652 },
    { "Light Olive", 0x98, 0x99, 0x6D, 653 },
    { "Bright Gold", 0xC9, 0x83, 0x00, 654 },
    { "Blue-Green", 0x00, 0x7B, 0x8D, 688 },
    { "Forrest Green", 0x00, 0x4D, 0x3D, 695 },
    { "Midnight Blue", 0x00, 0x7E, 0xBA, 697 },
    { "Med Red", 0xCF, 0x00, 0x40, 700 },
    { "Med Blue", 0x28, 0x43, 0x8C, 809 },
    { "Sweet Apricot", 0xD0, 0xB4, 0x78, 812 },
    { "Skin", 0xE5, 0xBE, 0x6C, 818 },
    { "Jade", 0x44, 0x92, 0x84, 825 },
    { "Light Silver", 0xCF, 0xCF, 0xCF, 829 },
    { "Papaya Whip", 0xDC, 0x87, 0x5E, 831 },
    { "Cooper", 0xB4, 0x70, 0x5D, 832 },
    { "Light Pecan", 0x9B, 0x5C, 0x4B, 833 },
    { "Burnt Rust", 0xA9, 0x31, 0x21, 838 },
    { "Vegas Gold", 0xB1, 0x8B, 0x00, 842 },
    { "Med Brown", 0x86, 0x46, 0x2E, 857 },
    { "Med Russett", 0x61, 0x41, 0x25, 859 },
    { "Med Copper", 0xB2, 0x5C, 0x31, 864 },
    { "Dark Driftwood", 0x80, 0x6A, 0x61, 873 },
    { "Birch", 0x63, 0x48, 0x31, 878 },
    { "Dark Chocolate", 0x1A, 0x0C, 0x06, 891 },
    { "Sky Blue 2", 0x96, 0xD5, 0xC8, 903 },
    { "Aquamarine", 0xB4, 0xDC, 0xD8, 904 },
    { "Golden Brown", 0xAF, 0x7D, 0x3E, 905 },
    { "Sea Blue", 0x00, 0xA3, 0xA0, 906 },
    { "Deep Sea", 0x00, 0x40, 0x5D, 913 },
    { "Pastel Mint", 0xC9, 0xE3, 0xC5, 947 },
    { "True Green", 0x55, 0xAF, 0x78, 949 },
    { "Med Olive", 0x85, 0x83, 0x25, 951 },
    { "Olive", 0x61, 0x60, 0x1C, 955 },
    { "Light Jade", 0x70, 0x91, 0x88, 961 },
    { "Smith Apple", 0xBE, 0xDC, 0x8C, 984 },
    { "Light Lime", 0xBE, 0xE6, 0x78, 985 },
    { "Grass Green", 0x76, 0xC8, 0x50, 988 },
    { "Deep Teal", 0x46, 0x6E, 0x64, 448 },
    { "Med Forrest Green", 0x35, 0x69, 0x36, 992 },
    { "Deep Violet", 0x4B, 0x48, 0x84, 1031 },
    { "Light Natural", 0xED, 0xED, 0xD2, 1140 },
    { "Wheat", 0xF3, 0xD8, 0xA8, 1145 },
    { "Desert Sand", 0xC8, 0xBE, 0x96, 1148 },
    { "Egyptian Blue", 0x24, 0x3A, 0x7D, 1163 },
    { "Gecko", 0x86, 0xBE, 0x4E, 1183 },
    { "Burgandy", 0x8E, 0x40, 0x44, 1241 },
    { "Med Orchid", 0x89, 0x34, 0x80, 1323 },
    { "Med Purple", 0x8C, 0x6D, 0xAA, 1324 },
    { "Very Old Gold", 0xB6, 0xA3, 0x6C, 1552 },
    { "Light Spruce", 0x2E, 0x9F, 0x76, 1615 },
    { "Paris Green", 0x98, 0xC1, 0x73, 1619 },
    { "Timberwolf", 0xCD, 0xCD, 0xCD, 1707 },
    { "Bright Blue", 0x2A, 0x37, 0x7E, 2031 },
    { "Turquoise Blue", 0x00, 0x6C, 0xA5, 2093 },
    { "Dark Wine", 0x83, 0x44, 0x55, 2250 },
    { "Beige", 0xD0, 0xA4, 0x4F, 2518 },
    { "Gold", 0xED, 0x92, 0x06, 2519 },
    { "Med Orange", 0xED, 0xEF, 0x05, 3001 },
    { "Dark Salmon", 0xC0, 0x7A, 0x46, 3014 },
    { "Fire Red", 0xB4, 0x3C, 0x3C, 3015 },
    { "Saddle Brown", 0x91, 0x5F, 0x46, 3142 },
    { "Yellow Sun", 0xFF, 0xC5, 0x00, 4117 },
    { "Deep Taupe", 0xA6, 0x8A, 0x68, 4371 },
    { "Sky Blue", 0x00, 0xA4, 0xD9, 4419 },
    { "Wild Peacock", 0x0B, 0x7F, 0x85, 4627 },
    { "Millard Green", 0x00, 0x2D, 0x1F, 4735 },
    { "Dark Blue", 0x11, 0x26, 0x3C, 5552 },
    { "Powder Blue", 0x91, 0xB9, 0xE2, 5554 },
    { "Froggy Green", 0x42, 0x96, 0x48, 5557 },
    { "Stone Grey", 0x87, 0x8C, 0x8C, 8010 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color Sulky_Rayon_codes[] = {
#if !ARDUINO
    { "Cornsilk", 0xEF, 0xC8, 0x10, 502 },
    { "Deep Arctic Sky", 0x0C, 0x08, 0x2D, 505 },
    { "Nutmeg", 0xB2, 0x6C, 0x29, 521 },
    { "Autumn Gold", 0xE7, 0x90, 0x02, 523 },
    { "English Green", 0x34, 0x48, 0x1E, 525 },
    { "Cobalt Blue", 0x11, 0x36, 0x75, 526 },
    { "Forest Green", 0x11, 0x14, 0x08, 538 },
    { "Lipstick", 0xE1, 0x00, 0x00, 561 },
    { "Spice", 0xFF, 0xB4, 0x35, 562 },
    { "Butterfly Gold", 0xF3, 0xA0, 0x01, 567 },
    { "Cinnamon", 0xE6, 0x6D, 0x00, 568 },
    { "Garden Green", 0x16, 0x5F, 0x28, 569 },
    { "Deep Aqua", 0x08, 0x8E, 0x6C, 571 },
    { "Blue Ribbon", 0x10, 0x0A, 0x7C, 572 },
    { "Mint Julep", 0x35, 0x69, 0x3D, 580 },
    { "Dusty Peach", 0xE9, 0xBD, 0x96, 619 },
    { "Sunset", 0xCD, 0x39, 0x00, 621 },
    { "Moss Green", 0x77, 0x71, 0x13, 630 },
    { "Med. Aqua", 0x1C, 0x6F, 0x51, 640 },
    { "Arctic Sky", 0x26, 0x23, 0x45, 643 },
    { "Bright White", 0xF9, 0xF9, 0xFF, 1001 },
    { "Soft White", 0xF9, 0xF9, 0xF4, 1002 },
    { "Black", 0x00, 0x00, 0x00, 1005 },
    { "Steel Gray", 0xB7, 0xA9, 0xAC, 1011 },
    { "Med. Peach", 0xE1, 0xAF, 0x9A, 1015 },
    { "Pastel Coral", 0xEC, 0x96, 0x8C, 1016 },
    { "Pastel Peach", 0xEF, 0xDF, 0xBD, 1017 },
    { "Peach", 0xEC, 0xA0, 0x82, 1019 },
    { "Dark Peach", 0xF0, 0x82, 0x78, 1020 },
    { "Maple", 0xEB, 0x66, 0x02, 1021 },
    { "Cream", 0xFF, 0xF7, 0xD5, 1022 },
    { "Yellow", 0xFF, 0xE6, 0x69, 1023 },
    { "Goldenrod", 0xFF, 0xB8, 0x00, 1024 },
    { "Mine Gold", 0xD7, 0x80, 0x00, 1025 },
    { "Baby Blue", 0xBE, 0xC3, 0xE1, 1028 },
    { "Med. Blue", 0xA0, 0xC3, 0xEB, 1029 },
    { "Periwinkle", 0xA6, 0xA2, 0xC6, 1030 },
    { "Med. Orchid", 0xDF, 0xBE, 0xC8, 1031 },
    { "Med. Purple", 0xE6, 0x8C, 0xEB, 1032 },
    { "Dk. Orchid", 0xD8, 0x64, 0x96, 1033 },
    { "Burgundy", 0xC6, 0x32, 0x3C, 1034 },
    { "Dk. Burgundy", 0x79, 0x00, 0x00, 1035 },
    { "Lt.Red", 0xF9, 0x00, 0x00, 1037 },
    { "True Red", 0xEB, 0x00, 0x00, 1039 },
    { "Med. Dk. Khaki", 0x87, 0x73, 0x75, 1040 },
    { "Med. Dk. Gray", 0x8C, 0x7F, 0x83, 1041 },
    { "Bright Navy Blue", 0x32, 0x1E, 0x50, 1042 },
    { "Dk. Navy", 0x19, 0x05, 0x25, 1043 },
    { "Midnight Blue", 0x1D, 0x06, 0x2F, 1044 },
    { "Lt. Teal", 0xC3, 0xEF, 0xBF, 1045 },
    { "Teal", 0x2E, 0x83, 0x59, 1046 },
    { "Mint Green", 0xA6, 0xC2, 0x84, 1047 },
    { "Grass Green", 0x42, 0xA0, 0x21, 1049 },
    { "Xmas Green", 0x1E, 0x64, 0x19, 1051 },
    { "Med. Dk. Ecru", 0xEE, 0xBE, 0xAE, 1054 },
    { "Tawny Tan", 0xEB, 0xBC, 0x80, 1055 },
    { "Med Tawny Tan", 0xAF, 0x5B, 0x00, 1056 },
    { "Dk Tawny Tan", 0x64, 0x27, 0x02, 1057 },
    { "Tawny Brown", 0x66, 0x35, 0x00, 1058 },
    { "Dk Tawny Brown", 0x53, 0x06, 0x01, 1059 },
    { "Pale Yellow", 0xFF, 0xF7, 0xB9, 1061 },
    { "Pale Yellow-Green", 0xF0, 0xF8, 0xEC, 1063 },
    { "Pale Peach", 0xE6, 0xB4, 0xAA, 1064 },
    { "Orange Yellow", 0xFF, 0x91, 0x00, 1065 },
    { "Primrose", 0xFF, 0xF1, 0x80, 1066 },
    { "Lemon Yellow", 0xFF, 0xFF, 0x85, 1067 },
    { "Pink Tint", 0xF3, 0xDB, 0xD9, 1068 },
    { "Gold", 0xF6, 0xCE, 0x69, 1070 },
    { "Off White", 0xF9, 0xF9, 0xEA, 1071 },
    { "Pale Powder Blue", 0xD6, 0xD5, 0xE8, 1074 },
    { "Royal Blue", 0x5A, 0x5A, 0x8B, 1076 },
    { "Jade Tint", 0xBE, 0xCD, 0xC8, 1077 },
    { "Tangerine", 0xFF, 0x66, 0x00, 1078 },
    { "Emerald Green", 0x17, 0x55, 0x23, 1079 },
    { "Orchid", 0xDC, 0x82, 0xA0, 1080 },
    { "Brick", 0xF0, 0x6E, 0x78, 1081 },
    { "Ecru", 0xF7, 0xE3, 0xBB, 1082 },
    { "Spark Gold", 0xFF, 0xC1, 0x00, 1083 },
    { "Silver", 0xE2, 0xCF, 0xC7, 1085 },
    { "Pale Sea Foam", 0xF9, 0xF9, 0xE0, 1086 },
    { "Deep Peacock", 0x16, 0x62, 0x5F, 1090 },
    { "Med Turquoise", 0x26, 0xBF, 0xCA, 1094 },
    { "Turquoise", 0x10, 0xD1, 0xBD, 1095 },
    { "Dk Turquoise", 0x0F, 0x69, 0x78, 1096 },
    { "Lt Grass Green", 0xC2, 0xD3, 0x7D, 1100 },
    { "True Green", 0x09, 0x85, 0x31, 1101 },
    { "Dk Khaki", 0x02, 0x14, 0x0F, 1103 },
    { "Pastel Yellow-Grn", 0xA5, 0xAF, 0x68, 1104 },
    { "Lt Mauve", 0xFA, 0xA4, 0xA4, 1108 },
    { "Hot Pink", 0xDC, 0x64, 0x96, 1109 },
    { "Pastel Orchid", 0xFC, 0xCB, 0xDF, 1111 },
    { "Royal Purple", 0x46, 0x01, 0x6E, 1112 },
    { "Pastel Mauve", 0xF0, 0xC8, 0xB4, 1113 },
    { "Lt Pink", 0xF0, 0xB9, 0xB9, 1115 },
    { "Mauve", 0xF5, 0xA9, 0xA0, 1117 },
    { "Dk Mauve", 0xB4, 0x6E, 0x75, 1119 },
    { "Pale Pink", 0xF0, 0xD6, 0xD2, 1120 },
    { "Pink", 0xFA, 0xB9, 0xCB, 1121 },
    { "Purple", 0x82, 0x28, 0x8E, 1122 },
    { "Sun Yellow", 0xFF, 0xEC, 0x00, 1124 },
    { "Tan", 0xDC, 0x8C, 0x17, 1126 },
    { "Med Ecru", 0xFA, 0xEC, 0xC6, 1127 },
    { "Dk Ecru", 0xC3, 0x94, 0x71, 1128 },
    { "Brown", 0x6A, 0x1F, 0x06, 1129 },
    { "Dark Brown", 0x55, 0x16, 0x02, 1130 },
    { "Cloister Brown", 0x49, 0x00, 0x02, 1131 },
    { "Peacock Blue", 0x50, 0x7D, 0xAA, 1134 },
    { "Pastel Yellow", 0xFF, 0xF0, 0x72, 1135 },
    { "Yellow Orange", 0xFF, 0xBE, 0x00, 1137 },
    { "True Blue", 0x4A, 0x58, 0x70, 1143 },
    { "Powder Blue", 0xB4, 0xE1, 0xEB, 1145 },
    { "Xmas Red", 0xEB, 0x00, 0x00, 1147 },
    { "Lt Coral", 0xFF, 0xBD, 0xBD, 1148 },
    { "Deep Ecru", 0xE8, 0xC8, 0x9C, 1149 },
    { "Powder Blue Tint", 0xE2, 0xE2, 0xEB, 1151 },
    { "Coral", 0xFA, 0x99, 0x99, 1154 },
    { "Lt Army Green", 0x63, 0x63, 0x27, 1156 },
    { "Dk Maple", 0xBA, 0x45, 0x00, 1158 },
    { "Temple Gold", 0xD3, 0x9D, 0x00, 1159 },
    { "Deep Teal", 0x10, 0x39, 0x4A, 1162 },
    { "Lt Sky Blue", 0xDF, 0xE5, 0xEB, 1165 },
    { "Med Steel Gray", 0x8E, 0x7E, 0x7E, 1166 },
    { "Maize Yellow", 0xFF, 0xD2, 0x26, 1167 },
    { "True Orange", 0xF5, 0x74, 0x0A, 1168 },
    { "Bayberry Red", 0x9C, 0x00, 0x00, 1169 },
    { "Lt Brown", 0x97, 0x5F, 0x2F, 1170 },
    { "Weathered Blue", 0x08, 0x18, 0x0E, 1171 },
    { "Med Weathered Blue", 0x6E, 0x78, 0x8C, 1172 },
    { "Med Army Green", 0x59, 0x59, 0x1D, 1173 },
    { "Dk Pine Green", 0x0D, 0x29, 0x04, 1174 },
    { "Dk Avocado", 0x15, 0x2D, 0x04, 1175 },
    { "Med Dk Avocado", 0x51, 0x53, 0x08, 1176 },
    { "Avocado", 0x89, 0x98, 0x12, 1177 },
    { "Dk Taupe", 0x8F, 0x62, 0x3D, 1179 },
    { "Med Taupe", 0xA5, 0x89, 0x73, 1180 },
    { "Rust", 0xCB, 0x00, 0x00, 1181 },
    { "Blue Black", 0x02, 0x01, 0x14, 1182 },
    { "Black Cherry", 0x32, 0x06, 0x14, 1183 },
    { "Orange Red", 0xFF, 0x66, 0x00, 1184 },
    { "Golden Yellow", 0xFC, 0xBE, 0x05, 1185 },
    { "Sable Brown", 0x5B, 0x00, 0x00, 1186 },
    { "Mimosa Yellow", 0xFF, 0xE5, 0x00, 1187 },
    { "Red Geranium", 0xFF, 0x00, 0x4B, 1188 },
    { "Dk Chestnut", 0x4B, 0x12, 0x2D, 1189 },
    { "Med Burgundy", 0xA0, 0x46, 0x56, 1190 },
    { "Dk Rose", 0xBD, 0x1E, 0x60, 1191 },
    { "Fuchsia", 0xD2, 0x1E, 0x82, 1192 },
    { "Lavender", 0xE6, 0xAF, 0xD2, 1193 },
    { "Lt Purple", 0xD2, 0x74, 0xD7, 1194 },
    { "Dk Purple", 0x37, 0x01, 0x50, 1195 },
    { "Blue", 0x96, 0xC3, 0xE1, 1196 },
    { "Med Navy", 0x22, 0x0F, 0x34, 1197 },
    { "Dusty Navy", 0x3C, 0x50, 0x75, 1198 },
    { "Admiral Navy Blue", 0x2A, 0x14, 0x3F, 1199 },
    { "Med Dk Navy", 0x14, 0x0B, 0x2D, 1200 },
    { "Med Powder Blue", 0x64, 0x8B, 0xBE, 1201 },
    { "Deep Turquoise", 0x18, 0x2B, 0x56, 1202 },
    { "Lt Weathered Blue", 0xAE, 0xB8, 0xC3, 1203 },
    { "Pastel Jade", 0xA8, 0xC8, 0xBC, 1204 },
    { "Med Jade", 0x6E, 0x90, 0xA5, 1205 },
    { "Dark Jade", 0x1E, 0x6E, 0x6F, 1206 },
    { "Sea Foam Green", 0x80, 0xA3, 0x88, 1207 },
    { "Mallard Green", 0x0C, 0x3D, 0x03, 1208 },
    { "Lt Avocado", 0xBD, 0xD1, 0x63, 1209 },
    { "Dk Army Green", 0x27, 0x3B, 0x00, 1210 },
    { "Lt Khaki", 0x95, 0xA4, 0x90, 1211 },
    { "Khaki", 0x63, 0x63, 0x2D, 1212 },
    { "Taupe", 0xB9, 0xA0, 0x96, 1213 },
    { "Med Chestnut", 0x64, 0x28, 0x28, 1214 },
    { "Blackberry", 0x50, 0x0A, 0x1E, 1215 },
    { "Med Maple", 0xAC, 0x1C, 0x01, 1216 },
    { "Chestnut", 0x97, 0x1F, 0x01, 1217 },
    { "Silver Gray", 0xDF, 0xDF, 0xCB, 1218 },
    { "Gray", 0x98, 0x88, 0x8C, 1219 },
    { "Charcoal Gray", 0x76, 0x59, 0x60, 1220 },
    { "Lt Baby Blue", 0xD1, 0xDB, 0xFF, 1222 },
    { "Baby Blue Tint", 0xDC, 0xE0, 0xF1, 1223 },
    { "Bright Pink", 0xF0, 0xA0, 0xB9, 1224 },
    { "Pastel Pink", 0xFA, 0xCB, 0xCB, 1225 },
    { "Dkl Periwinkle", 0x57, 0x36, 0x9E, 1226 },
    { "Gold Green", 0xAF, 0x89, 0x01, 1227 },
    { "Drab Green", 0x96, 0xAA, 0x8B, 1228 },
    { "Lt Putty", 0xE0, 0xDB, 0xDB, 1229 },
    { "Dk Teal", 0x0B, 0x41, 0x33, 1230 },
    { "Med Rose", 0xE5, 0x32, 0x6A, 1231 },
    { "Classic Green", 0x19, 0x32, 0x07, 1232 },
    { "Ocean Teal", 0x0D, 0x22, 0x10, 1233 },
    { "Almost Black", 0x3C, 0x1B, 0x1F, 1234 },
    { "Deep Purple", 0x78, 0x32, 0x98, 1235 },
    { "Lt Silver", 0xEA, 0xE4, 0xE4, 1236 },
    { "Deep Mauve", 0xBC, 0x3D, 0x2C, 1237 },
    { "Orange Sunrise", 0xFF, 0x83, 0x00, 1238 },
    { "Apricot", 0xFF, 0xAB, 0x57, 1239 },
    { "Smokey Grey", 0x74, 0x58, 0x6C, 1240 },
    { "Nassau Blue", 0x54, 0x3A, 0x8D, 1242 },
    { "Orange Flame", 0xFF, 0x00, 0x00, 1246 },
    { "Mahogany", 0x66, 0x00, 0x00, 1247 },
    { "Med Pastel Blue", 0xD2, 0xE6, 0xF0, 1248 },
    { "Cornflower Blue", 0x62, 0xAA, 0xDC, 1249 },
    { "Duck Wing Blue", 0x27, 0x5C, 0x70, 1250 },
    { "Bright Turquoise", 0x30, 0x6F, 0x75, 1251 },
    { "Bright Peacock", 0x09, 0xA1, 0xA8, 1252 },
    { "Dk Sapphire", 0x1B, 0x4C, 0xA4, 1253 },
    { "Dusty Lavender", 0xE6, 0xB9, 0xF5, 1254 },
    { "Deep Orchid", 0xBE, 0x19, 0x82, 1255 },
    { "Sweet Pink", 0xEB, 0x82, 0x96, 1256 },
    { "Deep Coral", 0xE6, 0x00, 0x41, 1257 },
    { "Coral Reed", 0xF0, 0xC4, 0xA0, 1258 },
    { "Salmon Peach", 0xE2, 0x82, 0x64, 1259 },
    { "Red Jubilee", 0xB3, 0x00, 0x00, 1263 },
    { "Cognac", 0x6A, 0x00, 0x00, 1264 },
    { "Burnt Toast", 0x9B, 0x6B, 0x2C, 1265 },
    { "Toast", 0x9C, 0x6D, 0x45, 1266 },
    { "Mink Brown", 0x86, 0x4C, 0x31, 1267 },
    { "Light Gray Khaki", 0xEF, 0xEF, 0xE5, 1268 },
    { "Dk Gray Khaki", 0xB7, 0xB7, 0xAF, 1270 },
    { "Evergreen", 0x3C, 0x4F, 0x31, 1271 },
    { "Hedge Green", 0x4A, 0x4A, 0x19, 1272 },
    { "Nile Green", 0x5C, 0x9A, 0x1A, 1274 },
    { "Sea Mist", 0xE0, 0xE6, 0xC8, 1275 },
    { "Pistachio", 0x70, 0x77, 0x0F, 1276 },
    { "Ivy Green", 0x02, 0x76, 0x02, 1277 },
    { "Bright Green", 0x00, 0xAF, 0x38, 1278 },
    { "Willow Green", 0x93, 0xD1, 0x6C, 1279 },
    { "Dk Willow Green", 0x46, 0xB7, 0x74, 1280 },
    { "Slate Gray", 0x48, 0x3D, 0x59, 1283 },
    { "Dk Winter Sky", 0x46, 0x6E, 0x78, 1284 },
    { "Dk Sage Green", 0x13, 0x4F, 0x45, 1285 },
    { "Dk French Green", 0x34, 0x32, 0x13, 1286 },
    { "French Green", 0x41, 0x55, 0x45, 1287 },
    { "Aqua", 0x0F, 0xA5, 0x6F, 1288 },
    { "Ice Blue", 0xDC, 0xEB, 0xF0, 1289 },
    { "Winter Sky", 0x72, 0x74, 0x83, 1291 },
    { "Heron Blue", 0xD1, 0xDC, 0xFA, 1292 },
    { "Deep Nassau Blue", 0x44, 0x23, 0x5D, 1293 },
    { "Deep Slate Gray", 0x41, 0x20, 0x44, 1294 },
    { "Sterling", 0x82, 0x87, 0x8C, 1295 },
    { "Hyacinth", 0xD2, 0xAA, 0xF0, 1296 },
    { "Lt Plum", 0x73, 0x5A, 0x64, 1297 },
    { "Dk Plum", 0x64, 0x46, 0x64, 1298 },
    { "Purple Shadow", 0x41, 0x14, 0x46, 1299 },
    { "Plum", 0x7E, 0x1E, 0x46, 1300 },
    { "Deep Eggplant", 0x32, 0x00, 0x46, 1301 },
    { "Eggplant", 0x6E, 0x0A, 0x96, 1302 },
    { "Dewberry", 0xB4, 0x73, 0x64, 1304 },
    { "Sage Green", 0xAE, 0xC6, 0xBB, 1305 },
    { "Gun Metal Gray", 0x7E, 0x6C, 0x7C, 1306 },
    { "Petal Pink", 0xDB, 0x64, 0x78, 1307 },
    { "Magenta", 0x78, 0x23, 0x46, 1309 },
    { "Mulberry", 0x96, 0x1A, 0x32, 1311 },
    { "Wine", 0x84, 0x00, 0x00, 1312 },
    { "Bittersweet", 0xFC, 0x8F, 0x0C, 1313 },
    { "Poppy", 0xFF, 0x00, 0x00, 1317 },
    { "Gray Khaki", 0xCB, 0xCB, 0xBD, 1321 },
    { "Chartreuse", 0x81, 0x89, 0x01, 1322 },
    { "Whisper Gray", 0xF8, 0xF5, 0xF1, 1325 },
    { "Dk Whisper Gray", 0xD5, 0xC7, 0xC3, 1327 },
    { "Nickel Gray", 0xC0, 0xB2, 0xB7, 1328 },
    { "Dk Nickel Gray", 0xAB, 0xA0, 0xA8, 1329 },
    { "Pale Green", 0xED, 0xF6, 0xD4, 1331 },
    { "Deep Chartreuse", 0x86, 0x81, 0x05, 1332 },
    { "Sunflower Gold", 0xF3, 0xB6, 0x00, 1333 },
    { "Green Peacock", 0x34, 0x96, 0x69, 1503 },
    { "Putty", 0xC1, 0xCB, 0xB9, 1508 },
    { "Lime Green", 0x7A, 0xB3, 0x1D, 1510 },
    { "Deep Rose", 0xEE, 0x50, 0x78, 1511 },
    { "Wild Peacock", 0x00, 0x7A, 0x67, 1513 },
    { "Rosebud", 0xFF, 0x8C, 0xCB, 1515 },
    { "Coachman Green", 0x01, 0x4F, 0x3A, 1517 },
    { "Lt Rose", 0xCD, 0x05, 0x4D, 1533 },
    { "Sapphire", 0x34, 0x7D, 0xCB, 1534 },
    { "Team Blue", 0x23, 0x23, 0x8B, 1535 },
    { "Midnight Teal", 0x08, 0x17, 0x05, 1536 },
    { "Peach Fluff", 0xFF, 0xD6, 0xC7, 1543 },
    { "Purple Accent", 0x9C, 0x64, 0x84, 1545 },
    { "Flax", 0xE6, 0xAE, 0x6F, 1549 },
    { "Desert Cactus", 0x6C, 0x8E, 0x87, 1550 },
    { "Ocean Aqua", 0x80, 0xB0, 0xAE, 1551 },
    { "Dk Desert Cactus", 0x6C, 0x7C, 0x71, 1552 },
    { "Purple Passion", 0x8C, 0x74, 0x8C, 1554 },
    { "Tea Rose", 0xEB, 0x71, 0x83, 1558 },
    { "Marine Aqua", 0x68, 0xE0, 0xF8, 1560 },
    { "Deep Hyacinth", 0xB5, 0x8C, 0xC7, 1561 },
    { "Shrimp", 0xFA, 0xD2, 0xAA, 1800 },
    { "Flesh", 0xFA, 0xDC, 0x96, 1801 },
    { "Soft Blush", 0xFF, 0xC8, 0x96, 1802 },
    { "Island Peach", 0xFF, 0x9B, 0x6E, 1803 },
    { "Bayou Blue", 0x37, 0x5A, 0x73, 1804 },
    { "Ocean View", 0x28, 0x50, 0x5A, 1805 },
    { "Madras Blue", 0xA0, 0xB9, 0xC3, 1806 },
    { "Soft Heather", 0xB4, 0x96, 0x82, 1807 },
    { "Velvet Slipper", 0xD2, 0xAF, 0x9B, 1808 },
    { "Iced Mauve", 0xA0, 0x7D, 0x82, 1809 },
    { "Wild Mulberry", 0x64, 0x50, 0x55, 1810 },
    { "Wineberry", 0x3C, 0x28, 0x37, 1811 },
    { "Wildflower", 0x6E, 0x2D, 0x5A, 1812 },
    { "Plum Wine", 0x6E, 0x2D, 0x41, 1813 },
    { "Orchid Kiss", 0xAF, 0x4B, 0x69, 1814 },
    { "Japanese Fern", 0x91, 0xB4, 0x32, 1815 },
    { "Honeydew", 0xD7, 0xF5, 0x8C, 1816 },
    { "Lemon Grass", 0xAA, 0xAF, 0x14, 1817 },
    { "Fairway Mist", 0xC8, 0xF5, 0x8C, 1818 },
    { "Outback", 0xC3, 0x91, 0x3C, 1819 },
    { "Fruit Shake", 0xC3, 0x8C, 0x73, 1820 },
    { "Creamy Peach", 0xFA, 0xC8, 0x96, 1821 },
    { "Toffee", 0x96, 0x5A, 0x37, 1822 },
    { "Cocoa", 0x96, 0x5A, 0x28, 1823 },
    { "Gentle Rain", 0xD2, 0xC3, 0xAF, 1824 },
    { "Barnyard Grass", 0x5F, 0x96, 0x19, 1825 },
    { "Galley Gold", 0xAA, 0x82, 0x0A, 1826 },
    { "Coral Sunset", 0xFF, 0x64, 0x3C, 1827 },
    { "Seashell", 0xFF, 0xE6, 0xAA, 1828 },
    { "Crème Brulee", 0xF0, 0xEB, 0xA5, 1829 },
    { "Lilac", 0xB4, 0x73, 0x96, 1830 },
    { "Liimeade", 0x91, 0xE1, 0x2D, 1831 },
    { "Desert Glow", 0xE1, 0x91, 0x19, 1832 },
    { "Pumpkin Pie", 0xD2, 0x5F, 0x00, 1833 },
    { "Pea Soup", 0xAF, 0xAA, 0x05, 1834 },
    { "Peapod Green", 0x6E, 0x82, 0x05, 1835 },
    { "Loden Green", 0x3C, 0x4B, 0x05, 1836 },
    { "Lt. Cocoa", 0x9B, 0x73, 0x5A, 1837 },
    { "Cocoa Cream", 0xCD, 0xAA, 0x7D, 1838 },
    { "Cameo", 0x87, 0xC8, 0x87, 1839 },
    { "Sand", 0xF9, 0xE6, 0xCA, 508 },
    { "Bone", 0xFD, 0xF3, 0xDA, 520 },
    { "Dark Ash", 0x5D, 0x34, 0x46, 1241 },
    { "Spring Moss", 0xE0, 0xC6, 0x3B, 1243 },
    { "Summer Gold", 0xDD, 0xAB, 0x00, 1260 },
    { "Dk. Autumn Gold", 0xA9, 0x88, 0x03, 1262 },
    { "Mushroom", 0xAC, 0x87, 0x83, 1269 },
    { "Dark Forest", 0x36, 0x36, 0x1F, 1273 },
    { "Watermelon", 0xFA, 0x5F, 0x7F, 1303 },
    { "Caribbean Mist", 0xA3, 0xC2, 0xD7, 1644 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color ThreadArt_Rayon_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color ThreadArt_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color ThreaDelight_Polyester_codes[] = {
    { "END", 0, 0, 0, -1 }
};

static thread_color Z102_Isacord_Polyester_codes[] = {
#if !ARDUINO
    { "?", 0xF8, 0xFF, 0xFF, 17 },
    { "?", 0x00, 0x00, 0x00, 20 },
    { "?", 0xB7, 0xBA, 0xBA, 105 },
    { "?", 0x73, 0x78, 0x7A, 108 },
    { "?", 0x45, 0x4B, 0x58, 138 },
    { "?", 0x9E, 0xA9, 0xA6, 142 },
    { "?", 0xC8, 0xC6, 0xBD, 150 },
    { "?", 0xFA, 0xEE, 0x5C, 220 },
    { "?", 0xE5, 0xCB, 0x4F, 221 },
    { "?", 0xFF, 0xF4, 0x6A, 230 },
    { "?", 0xFE, 0xF9, 0xD9, 270 },
    { "?", 0xFF, 0xDC, 0x00, 311 },
    { "?", 0x62, 0x4F, 0x00, 345 },
    { "?", 0xB8, 0xB2, 0x5A, 352 },
    { "?", 0x8D, 0x8F, 0x5B, 453 },
    { "?", 0xFF, 0xF4, 0xA5, 520 },
    { "?", 0xB9, 0x8E, 0x03, 542 },
    { "?", 0xE4, 0xC1, 0x80, 651 },
    { "?", 0xC5, 0xBF, 0xA6, 672 },
    { "?", 0x96, 0x83, 0x6D, 722 },
    { "?", 0x4E, 0x35, 0x00, 747 },
    { "?", 0xDD, 0xCB, 0xA5, 761 },
    { "?", 0x60, 0x58, 0x40, 776 },
    { "?", 0xFF, 0xAF, 0x02, 800 },
    { "?", 0xF6, 0xAE, 0x32, 811 },
    { "?", 0xC8, 0x93, 0x34, 822 },
    { "?", 0xE5, 0x93, 0x00, 824 },
    { "?", 0xC8, 0x93, 0x40, 832 },
    { "?", 0x9E, 0x94, 0x7F, 873 },
    { "?", 0xC8, 0x70, 0x0B, 922 },
    { "?", 0xBB, 0x57, 0x04, 931 },
    { "?", 0xB1, 0x90, 0x72, 1061 },
    { "?", 0xFF, 0x81, 0x01, 1102 },
    { "?", 0xB1, 0x50, 0x0A, 1115 },
    { "?", 0xC0, 0x9C, 0x72, 1123 },
    { "?", 0x84, 0x3D, 0x07, 1134 },
    { "?", 0xD8, 0xA6, 0x7D, 1141 },
    { "?", 0x82, 0x42, 0x1B, 1154 },
    { "?", 0xFF, 0x73, 0x19, 1300 },
    { "?", 0xFF, 0x3D, 0x1E, 1305 },
    { "?", 0xBA, 0x40, 0x05, 1311 },
    { "?", 0xC7, 0x3C, 0x13, 1312 },
    { "?", 0xE6, 0x6B, 0x21, 1332 },
    { "?", 0x3D, 0x1C, 0x11, 1346 },
    { "?", 0xFF, 0xBC, 0x95, 1351 },
    { "?", 0xFF, 0xCC, 0x93, 1362 },
    { "?", 0x37, 0x37, 0x32, 1375 },
    { "?", 0xFF, 0xAF, 0x94, 1532 },
    { "?", 0x5B, 0x40, 0x32, 1565 },
    { "?", 0xFF, 0x60, 0x46, 1600 },
    { "?", 0xFF, 0x6D, 0x71, 1753 },
    { "?", 0xEB, 0xBA, 0xAE, 1755 },
    { "?", 0xEB, 0x2D, 0x2B, 1805 },
    { "?", 0xFF, 0x98, 0x8F, 1840 },
    { "?", 0x43, 0x43, 0x31, 1874 },
    { "?", 0xC1, 0x19, 0x14, 1902 },
    { "?", 0xC8, 0x10, 0x0D, 1903 },
    { "?", 0xBF, 0x0A, 0x21, 1906 },
    { "?", 0xD2, 0x3C, 0x3E, 1921 },
    { "?", 0x8F, 0x8C, 0x93, 1972 },
    { "?", 0xA3, 0x1A, 0x1C, 2011 },
    { "?", 0x4D, 0x03, 0x08, 2115 },
    { "?", 0xFF, 0xCD, 0xCC, 2155 },
    { "?", 0x87, 0x1C, 0x45, 2500 },
    { "?", 0xDB, 0x40, 0x83, 2508 },
    { "?", 0xFF, 0x66, 0x8A, 2520 },
    { "?", 0xC9, 0x12, 0x43, 2521 },
    { "?", 0xFF, 0xA0, 0xB6, 2530 },
    { "?", 0xFE, 0xA5, 0xB9, 2550 },
    { "?", 0x62, 0x6C, 0x7E, 2674 },
    { "?", 0x5E, 0x19, 0x42, 2711 },
    { "?", 0x33, 0x00, 0x1D, 2715 },
    { "?", 0xA5, 0x7B, 0x8D, 2764 },
    { "?", 0x70, 0x2A, 0x69, 2810 },
    { "?", 0xB3, 0x85, 0xBC, 2830 },
    { "?", 0x24, 0x00, 0x47, 2900 },
    { "?", 0x72, 0x45, 0x93, 2910 },
    { "?", 0x63, 0x4D, 0x86, 2920 },
    { "?", 0x00, 0x01, 0x36, 3110 },
    { "?", 0x00, 0x00, 0x21, 3355 },
    { "?", 0x05, 0x4A, 0xBD, 3522 },
    { "?", 0x1C, 0x00, 0x5D, 3541 },
    { "?", 0x00, 0x1F, 0x71, 3544 },
    { "?", 0x00, 0x2E, 0x5E, 3622 },
    { "?", 0x71, 0xAA, 0xD8, 3630 },
    { "?", 0x00, 0x17, 0x48, 3644 },
    { "?", 0xC8, 0xDB, 0xE4, 3650 },
    { "?", 0x9F, 0xC7, 0xDF, 3730 },
    { "?", 0x08, 0x2E, 0x4D, 3743 },
    { "?", 0x98, 0xB0, 0xBC, 3750 },
    { "?", 0x23, 0x67, 0x9C, 3810 },
    { "?", 0x3D, 0x65, 0x7E, 3842 },
    { "?", 0x00, 0x66, 0x9F, 3901 },
    { "?", 0x47, 0xAE, 0xDD, 3910 },
    { "?", 0xBB, 0xDF, 0xEB, 3962 },
    { "?", 0xBA, 0xBE, 0xB7, 3971 },
    { "?", 0x01, 0x5D, 0x7E, 4032 },
    { "?", 0xD5, 0xDD, 0xDB, 4071 },
    { "?", 0x88, 0x8D, 0x8E, 4073 },
    { "?", 0x00, 0x7C, 0xA6, 4103 },
    { "?", 0x3E, 0xBB, 0xC8, 4111 },
    { "?", 0x00, 0x5C, 0x79, 4116 },
    { "?", 0x80, 0xCC, 0xD8, 4240 },
    { "?", 0xAC, 0xCE, 0xC7, 4250 },
    { "?", 0x00, 0x6E, 0x74, 4410 },
    { "?", 0x00, 0x2A, 0x29, 4515 },
    { "?", 0x38, 0xA4, 0xAE, 4620 },
    { "?", 0xAF, 0xD8, 0xCD, 5050 },
    { "?", 0x14, 0x9B, 0x7B, 5210 },
    { "?", 0x7A, 0xC8, 0xAF, 5220 },
    { "?", 0x18, 0x71, 0x66, 5233 },
    { "?", 0x00, 0x4B, 0x23, 5374 },
    { "?", 0x00, 0x68, 0x35, 5415 },
    { "?", 0x5C, 0x9C, 0x51, 5531 },
    { "?", 0x0E, 0x95, 0x43, 5613 },
    { "?", 0x5E, 0x7A, 0x17, 5833 },
    { "?", 0x22, 0x59, 0x26, 5944 },
    { "?", 0xBC, 0xD6, 0x33, 6011 },
    { "?", 0xBB, 0xCD, 0x91, 6051 },
    { "?", 0x97, 0x8B, 0x3C, 6133 },
#endif
    { "END", 0, 0, 0, -1 }
};

static thread_color* brand_codes[] = {
    Arc_Polyester_codes, /* 0 */
    Arc_Rayon_codes, /* 1 */
    CoatsAndClark_Rayon_codes, /* 2 */
    Exquisite_Polyester_codes, /* 3 */
    Fufu_Polyester_codes, /* 4 */
    Fufu_Rayon_codes, /* 5 */
    Hemingworth_Polyester_codes, /* 6 */
    Isacord_Polyester_codes, /* 7 */
    Isafil_Rayon_codes, /* 8 */
    Marathon_Polyester_codes, /* 9 */
    Marathon_Rayon_codes, /* 10 */
    Madeira_Polyester_codes, /* 11 */
    Madeira_Rayon_codes, /* 12 */
    Metro_Polyester_codes, /* 13 */
    Pantone_codes, /* 14 */
    RobisonAnton_Polyester_codes, /* 15 */
    RobisonAnton_Rayon_codes, /* 16 */
    Sigma_Polyester_codes, /* 17 */
    Sulky_Rayon_codes, /* 18 */
    ThreadArt_Rayon_codes, /* 19 */
    ThreadArt_Polyester_codes, /* 20 */
    ThreaDelight_Polyester_codes, /* 21 */
    Z102_Isacord_Polyester_codes, /* 22 */
    svg_color_codes /* 23 */
};


/**
Type of sector
*/
#define CompoundFileSector_MaxRegSector 0xFFFFFFFA
#define CompoundFileSector_DIFAT_Sector 0xFFFFFFFC
#define CompoundFileSector_FAT_Sector 0xFFFFFFFD
#define CompoundFileSector_EndOfChain 0xFFFFFFFE
#define CompoundFileSector_FreeSector 0xFFFFFFFF

/**
Type of directory object
*/
#define ObjectTypeUnknown 0x00 /*!< Probably unallocated    */
#define ObjectTypeStorage 0x01 /*!< a directory type object */
#define ObjectTypeStream 0x02 /*!< a file type object      */
#define ObjectTypeRootEntry 0x05 /*!< the root entry          */

/**
Special values for Stream Identifiers
*/
#define CompoundFileStreamId_MaxRegularStreamId 0xFFFFFFFA /*!< All real stream Ids are less than this */
#define CompoundFileStreamId_NoStream 0xFFFFFFFF /*!< There is no valid stream Id            */

/* TODO: This list needs reviewed in case some stitch formats also can contain object data (EMBFORMAT_STCHANDOBJ). */

const EmbFormatList formatTable[100] = {
    { ".10o", "Toyota Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".100", "Toyota Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".art", "Bernina Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".bmc", "Bitmap Cache Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".bro", "Bits & Volts Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".cnd", "Melco Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".col", "Embroidery Thread Color Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".csd", "Singer Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".csv", "Comma Separated Values Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".dat", "Barudan Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".dem", "Melco Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".dsb", "Barudan Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".dst", "Tajima Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".dsz", "ZSK USA Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".dxf", "Drawing Exchange Format", ' ', ' ', EMBFORMAT_OBJECTONLY },
    { ".edr", "Embird Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".emd", "Elna Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".exp", "Melco Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".exy", "Eltac Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".eys", "Sierra Expanded Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".fxy", "Fortron Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".gc", "Smoothie G-Code Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".gnc", "Great Notions Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".gt", "Gold Thread Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".hus", "Husqvarna Viking Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".inb", "Inbro Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".inf", "Embroidery Color Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".jef", "Janome Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".ksm", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".max", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".mit", "Mitsubishi Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".new", "Ameco Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".ofm", "Melco Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".pcd", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".pcm", "Pfaff Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".pcq", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".pcs", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".pec", "Brother Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".pel", "Brother Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".pem", "Brother Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".pes", "Brother Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".phb", "Brother Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".phc", "Brother Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".plt", "AutoCAD Plot Drawing Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".rgb", "RGB Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".sew", "Janome Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".shv", "Husqvarna Viking Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".sst", "Sunstar Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".stx", "Data Stitch Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".svg", "Scalable Vector Graphics", 'U', 'U', EMBFORMAT_OBJECTONLY },
    { ".t01", "Pfaff Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".t09", "Pfaff Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".tap", "Happy Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".thr", "ThredWorks Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".txt", "Text File", ' ', 'U', EMBFORMAT_STITCHONLY },
    { ".u00", "Barudan Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".u01", "Barudan Embroidery Format", ' ', ' ', EMBFORMAT_STITCHONLY },
    { ".vip", "Pfaff Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { ".vp3", "Pfaff Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".xxx", "Singer Embroidery Format", 'U', 'U', EMBFORMAT_STITCHONLY },
    { ".zsk", "ZSK USA Embroidery Format", 'U', ' ', EMBFORMAT_STITCHONLY },
    { "END", "END", ' ', ' ', 0 }
};

#define CSV_EXPECT_NULL   0
#define CSV_EXPECT_QUOTE1 1
#define CSV_EXPECT_QUOTE2 2
#define CSV_EXPECT_COMMA  3

#define CSV_MODE_NULL     0
#define CSV_MODE_COMMENT  1
#define CSV_MODE_VARIABLE 2
#define CSV_MODE_THREAD   3
#define CSV_MODE_STITCH   4


/* DXF Version Identifiers */
#define DXF_VERSION_R10 "AC1006"
#define DXF_VERSION_R11 "AC1009"
#define DXF_VERSION_R12 "AC1009"
#define DXF_VERSION_R13 "AC1012"
#define DXF_VERSION_R14 "AC1014"
#define DXF_VERSION_R15 "AC1015"
#define DXF_VERSION_R18 "AC1018"
#define DXF_VERSION_R21 "AC1021"
#define DXF_VERSION_R24 "AC1024"
#define DXF_VERSION_R27 "AC1027"

#define DXF_VERSION_2000 "AC1015"
#define DXF_VERSION_2002 "AC1015"
#define DXF_VERSION_2004 "AC1018"
#define DXF_VERSION_2006 "AC1018"
#define DXF_VERSION_2007 "AC1021"
#define DXF_VERSION_2009 "AC1021"
#define DXF_VERSION_2010 "AC1024"
#define DXF_VERSION_2013 "AC1027"

/* Based on the DraftSight color table */
static const unsigned char _dxfColorTable[][3] = {
    { 0, 0, 0 }, /*   '0' (BYBLOCK)    */
    { 255, 0, 0 }, /*   '1' (red)        */
    { 255, 255, 0 }, /*   '2' (yellow)     */
    { 0, 255, 0 }, /*   '3' (green)      */
    { 0, 255, 255 }, /*   '4' (cyan)       */
    { 0, 0, 255 }, /*   '5' (blue)       */
    { 255, 0, 255 }, /*   '6' (magenta)    */
    { 255, 255, 255 }, /*   '7' (white)      */
    { 128, 128, 128 }, /*   '8' (dark gray)  */
    { 192, 192, 192 }, /*   '9' (light gray) */
    { 255, 0, 0 }, /*  '10' */
    { 255, 127, 127 }, /*  '11' */
    { 204, 0, 0 }, /*  '12' */
    { 204, 102, 102 }, /*  '13' */
    { 153, 0, 0 }, /*  '14' */
    { 153, 76, 76 }, /*  '15' */
    { 127, 0, 0 }, /*  '16' */
    { 127, 63, 63 }, /*  '17' */
    { 76, 0, 0 }, /*  '18' */
    { 76, 38, 38 }, /*  '19' */
    { 255, 63, 0 }, /*  '20' */
    { 255, 159, 127 }, /*  '21' */
    { 204, 51, 0 }, /*  '22' */
    { 204, 127, 102 }, /*  '23' */
    { 153, 38, 0 }, /*  '24' */
    { 153, 95, 76 }, /*  '25' */
    { 127, 31, 0 }, /*  '26' */
    { 127, 79, 63 }, /*  '27' */
    { 76, 19, 0 }, /*  '28' */
    { 76, 47, 38 }, /*  '29' */
    { 255, 127, 0 }, /*  '30' */
    { 255, 191, 127 }, /*  '31' */
    { 204, 102, 0 }, /*  '32' */
    { 204, 153, 102 }, /*  '33' */
    { 153, 76, 0 }, /*  '34' */
    { 153, 114, 76 }, /*  '35' */
    { 127, 63, 0 }, /*  '36' */
    { 127, 95, 63 }, /*  '37' */
    { 76, 38, 0 }, /*  '38' */
    { 76, 57, 38 }, /*  '39' */
    { 255, 191, 0 }, /*  '40' */
    { 255, 223, 127 }, /*  '41' */
    { 204, 153, 0 }, /*  '42' */
    { 204, 178, 102 }, /*  '43' */
    { 153, 114, 0 }, /*  '44' */
    { 153, 133, 76 }, /*  '45' */
    { 127, 95, 0 }, /*  '46' */
    { 127, 111, 63 }, /*  '47' */
    { 76, 57, 0 }, /*  '48' */
    { 76, 66, 38 }, /*  '49' */
    { 255, 255, 0 }, /*  '50' */
    { 255, 255, 127 }, /*  '51' */
    { 204, 204, 0 }, /*  '52' */
    { 204, 204, 102 }, /*  '53' */
    { 153, 153, 0 }, /*  '54' */
    { 153, 153, 76 }, /*  '55' */
    { 127, 127, 0 }, /*  '56' */
    { 127, 127, 63 }, /*  '57' */
    { 76, 76, 0 }, /*  '58' */
    { 76, 76, 38 }, /*  '59' */
    { 191, 255, 0 }, /*  '60' */
    { 223, 255, 127 }, /*  '61' */
    { 153, 204, 0 }, /*  '62' */
    { 178, 204, 102 }, /*  '63' */
    { 114, 153, 0 }, /*  '64' */
    { 133, 153, 76 }, /*  '65' */
    { 95, 127, 0 }, /*  '66' */
    { 111, 127, 63 }, /*  '67' */
    { 57, 76, 0 }, /*  '68' */
    { 66, 76, 38 }, /*  '69' */
    { 127, 255, 0 }, /*  '70' */
    { 191, 255, 127 }, /*  '71' */
    { 102, 204, 0 }, /*  '72' */
    { 153, 204, 102 }, /*  '73' */
    { 76, 153, 0 }, /*  '74' */
    { 114, 153, 76 }, /*  '75' */
    { 63, 127, 0 }, /*  '76' */
    { 95, 127, 63 }, /*  '77' */
    { 38, 76, 0 }, /*  '78' */
    { 57, 76, 38 }, /*  '79' */
    { 63, 255, 0 }, /*  '80' */
    { 159, 255, 127 }, /*  '81' */
    { 51, 204, 0 }, /*  '82' */
    { 127, 204, 102 }, /*  '83' */
    { 38, 153, 0 }, /*  '84' */
    { 95, 153, 76 }, /*  '85' */
    { 31, 127, 0 }, /*  '86' */
    { 79, 127, 63 }, /*  '87' */
    { 19, 76, 0 }, /*  '88' */
    { 47, 76, 38 }, /*  '89' */
    { 0, 255, 0 }, /*  '90' */
    { 127, 255, 127 }, /*  '91' */
    { 0, 204, 0 }, /*  '92' */
    { 102, 204, 102 }, /*  '93' */
    { 0, 153, 0 }, /*  '94' */
    { 76, 153, 76 }, /*  '95' */
    { 0, 127, 0 }, /*  '96' */
    { 63, 127, 63 }, /*  '97' */
    { 0, 76, 0 }, /*  '98' */
    { 38, 76, 38 }, /*  '99' */
    { 0, 255, 63 }, /* '100' */
    { 127, 255, 159 }, /* '101' */
    { 0, 204, 51 }, /* '102' */
    { 102, 204, 127 }, /* '103' */
    { 0, 153, 38 }, /* '104' */
    { 76, 153, 95 }, /* '105' */
    { 0, 127, 31 }, /* '106' */
    { 63, 127, 79 }, /* '107' */
    { 0, 76, 19 }, /* '108' */
    { 38, 76, 47 }, /* '109' */
    { 0, 255, 127 }, /* '110' */
    { 127, 255, 191 }, /* '111' */
    { 0, 204, 102 }, /* '112' */
    { 102, 204, 153 }, /* '113' */
    { 0, 153, 76 }, /* '114' */
    { 76, 153, 114 }, /* '115' */
    { 0, 127, 63 }, /* '116' */
    { 63, 127, 95 }, /* '117' */
    { 0, 76, 38 }, /* '118' */
    { 38, 76, 57 }, /* '119' */
    { 0, 255, 191 }, /* '120' */
    { 127, 255, 223 }, /* '121' */
    { 0, 204, 153 }, /* '122' */
    { 102, 204, 178 }, /* '123' */
    { 0, 153, 114 }, /* '124' */
    { 76, 153, 133 }, /* '125' */
    { 0, 127, 95 }, /* '126' */
    { 63, 127, 111 }, /* '127' */
    { 0, 76, 57 }, /* '128' */
    { 38, 76, 66 }, /* '129' */
    { 0, 255, 255 }, /* '130' */
    { 127, 255, 255 }, /* '131' */
    { 0, 204, 204 }, /* '132' */
    { 102, 204, 204 }, /* '133' */
    { 0, 153, 153 }, /* '134' */
    { 76, 153, 153 }, /* '135' */
    { 0, 127, 127 }, /* '136' */
    { 63, 127, 127 }, /* '137' */
    { 0, 76, 76 }, /* '138' */
    { 38, 76, 76 }, /* '139' */
    { 0, 191, 255 }, /* '140' */
    { 127, 223, 255 }, /* '141' */
    { 0, 153, 204 }, /* '142' */
    { 102, 178, 204 }, /* '143' */
    { 0, 114, 153 }, /* '144' */
    { 76, 133, 153 }, /* '145' */
    { 0, 95, 127 }, /* '146' */
    { 63, 111, 127 }, /* '147' */
    { 0, 57, 76 }, /* '148' */
    { 38, 66, 76 }, /* '149' */
    { 0, 127, 255 }, /* '150' */
    { 127, 191, 255 }, /* '151' */
    { 0, 102, 204 }, /* '152' */
    { 102, 153, 204 }, /* '153' */
    { 0, 76, 153 }, /* '154' */
    { 76, 114, 153 }, /* '155' */
    { 0, 63, 127 }, /* '156' */
    { 63, 95, 127 }, /* '157' */
    { 0, 38, 76 }, /* '158' */
    { 38, 57, 76 }, /* '159' */
    { 0, 63, 255 }, /* '160' */
    { 127, 159, 255 }, /* '161' */
    { 0, 51, 204 }, /* '162' */
    { 102, 127, 204 }, /* '163' */
    { 0, 38, 153 }, /* '164' */
    { 76, 95, 153 }, /* '165' */
    { 0, 31, 127 }, /* '166' */
    { 63, 79, 127 }, /* '167' */
    { 0, 19, 76 }, /* '168' */
    { 38, 47, 76 }, /* '169' */
    { 0, 0, 255 }, /* '170' */
    { 127, 127, 255 }, /* '171' */
    { 0, 0, 204 }, /* '172' */
    { 102, 102, 204 }, /* '173' */
    { 0, 0, 153 }, /* '174' */
    { 76, 76, 153 }, /* '175' */
    { 0, 0, 127 }, /* '176' */
    { 63, 63, 127 }, /* '177' */
    { 0, 0, 76 }, /* '178' */
    { 38, 38, 76 }, /* '179' */
    { 63, 0, 255 }, /* '180' */
    { 159, 127, 255 }, /* '181' */
    { 51, 0, 204 }, /* '182' */
    { 127, 102, 204 }, /* '183' */
    { 38, 0, 153 }, /* '184' */
    { 95, 76, 153 }, /* '185' */
    { 31, 0, 127 }, /* '186' */
    { 79, 63, 127 }, /* '187' */
    { 19, 0, 76 }, /* '188' */
    { 47, 38, 76 }, /* '189' */
    { 127, 0, 255 }, /* '190' */
    { 191, 127, 255 }, /* '191' */
    { 102, 0, 204 }, /* '192' */
    { 153, 102, 204 }, /* '193' */
    { 76, 0, 153 }, /* '194' */
    { 114, 76, 153 }, /* '195' */
    { 63, 0, 127 }, /* '196' */
    { 95, 63, 127 }, /* '197' */
    { 38, 0, 76 }, /* '198' */
    { 57, 38, 76 }, /* '199' */
    { 191, 0, 255 }, /* '200' */
    { 223, 127, 255 }, /* '201' */
    { 153, 0, 204 }, /* '202' */
    { 178, 102, 204 }, /* '203' */
    { 114, 0, 153 }, /* '204' */
    { 133, 76, 153 }, /* '205' */
    { 95, 0, 127 }, /* '206' */
    { 111, 63, 127 }, /* '207' */
    { 57, 0, 76 }, /* '208' */
    { 66, 38, 76 }, /* '209' */
    { 255, 0, 255 }, /* '210' */
    { 255, 127, 255 }, /* '211' */
    { 204, 0, 204 }, /* '212' */
    { 204, 102, 204 }, /* '213' */
    { 153, 0, 153 }, /* '214' */
    { 153, 76, 153 }, /* '215' */
    { 127, 0, 127 }, /* '216' */
    { 127, 63, 127 }, /* '217' */
    { 76, 0, 76 }, /* '218' */
    { 76, 38, 76 }, /* '219' */
    { 255, 0, 191 }, /* '220' */
    { 255, 127, 223 }, /* '221' */
    { 204, 0, 153 }, /* '222' */
    { 204, 102, 178 }, /* '223' */
    { 153, 0, 114 }, /* '224' */
    { 153, 76, 133 }, /* '225' */
    { 127, 0, 95 }, /* '226' */
    { 127, 63, 111 }, /* '227' */
    { 76, 0, 57 }, /* '228' */
    { 76, 38, 66 }, /* '229' */
    { 255, 0, 127 }, /* '230' */
    { 255, 127, 191 }, /* '231' */
    { 204, 0, 102 }, /* '232' */
    { 204, 102, 153 }, /* '233' */
    { 153, 0, 76 }, /* '234' */
    { 153, 76, 114 }, /* '235' */
    { 127, 0, 63 }, /* '236' */
    { 127, 63, 95 }, /* '237' */
    { 76, 0, 38 }, /* '238' */
    { 76, 38, 57 }, /* '239' */
    { 255, 0, 63 }, /* '240' */
    { 255, 127, 159 }, /* '241' */
    { 204, 0, 51 }, /* '242' */
    { 204, 102, 127 }, /* '243' */
    { 153, 0, 38 }, /* '244' */
    { 153, 76, 95 }, /* '245' */
    { 127, 0, 31 }, /* '246' */
    { 127, 63, 79 }, /* '247' */
    { 76, 0, 19 }, /* '248' */
    { 76, 38, 47 }, /* '249' */
    { 51, 51, 51 }, /* '250' */
    { 91, 91, 91 }, /* '251' */
    { 132, 132, 132 }, /* '252' */
    { 173, 173, 173 }, /* '253' */
    { 214, 214, 214 }, /* '254' */
    { 255, 255, 255 }, /* '255' */
    { 0, 0, 0 } /* '256' (BYLAYER) */
};

#define MAX_LAYERS 16
#define MAX_LAYER_NAME_LENGTH 30

/*****************************************
 * HUS Colors
 ****************************************/
static const int husThreadCount = 29;
static const EmbThread husThreads[] = {
    { { 0, 0, 0 }, "Black", "TODO:HUS_CATALOG_NUMBER" },
    { { 0, 0, 255 }, "Blue", "TODO:HUS_CATALOG_NUMBER" },
    { { 0, 255, 0 }, "Light Green", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 0, 0 }, "Red", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 0, 255 }, "Purple", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 255, 0 }, "Yellow", "TODO:HUS_CATALOG_NUMBER" },
    { { 127, 127, 127 }, "Gray", "TODO:HUS_CATALOG_NUMBER" },
    { { 51, 154, 255 }, "Light Blue", "TODO:HUS_CATALOG_NUMBER" },
    { { 51, 204, 102 }, "Green", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 127, 0 }, "Orange", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 160, 180 }, "Pink", "TODO:HUS_CATALOG_NUMBER" },
    { { 153, 75, 0 }, "Brown", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 255, 255 }, "White", "TODO:HUS_CATALOG_NUMBER" },
    { { 0, 0, 127 }, "Dark Blue", "TODO:HUS_CATALOG_NUMBER" },
    { { 0, 127, 0 }, "Dark Green", "TODO:HUS_CATALOG_NUMBER" },
    { { 127, 0, 0 }, "Dark Red", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 127, 127 }, "Light Red", "TODO:HUS_CATALOG_NUMBER" },
    { { 127, 0, 127 }, "Dark Purple", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 127, 255 }, "Light Purple", "TODO:HUS_CATALOG_NUMBER" },
    { { 200, 200, 0 }, "Dark Yellow", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 255, 153 }, "Light Yellow", "TODO:HUS_CATALOG_NUMBER" },
    { { 60, 60, 60 }, "Dark Gray", "TODO:HUS_CATALOG_NUMBER" },
    { { 192, 192, 192 }, "Light Gray", "TODO:HUS_CATALOG_NUMBER" },
    { { 232, 63, 0 }, "Dark Orange", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 165, 65 }, "Light Orange", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 102, 122 }, "Dark Pink", "TODO:HUS_CATALOG_NUMBER" },
    { { 255, 204, 204 }, "Light Pink", "TODO:HUS_CATALOG_NUMBER" },
    { { 115, 40, 0 }, "Dark Brown", "TODO:HUS_CATALOG_NUMBER" },
    { { 175, 90, 10 }, "Light Brown", "TODO:HUS_CATALOG_NUMBER" }
};


static const EmbThread jefThreads[] = {
    { { 0, 0, 0 }, "Black", "" },
    { { 0, 0, 0 }, "Black", "" },
    { { 255, 255, 255 }, "White", "" },
    { { 255, 255, 23 }, "Yellow", "" },
    { { 250, 160, 96 }, "Orange", "" },
    { { 92, 118, 73 }, "Olive Green", "" },
    { { 64, 192, 48 }, "Green", "" },
    { { 101, 194, 200 }, "Sky", "" },
    { { 172, 128, 190 }, "Purple", "" },
    { { 245, 188, 203 }, "Pink", "" },
    { { 255, 0, 0 }, "Red", "" },
    { { 192, 128, 0 }, "Brown", "" },
    { { 0, 0, 240 }, "Blue", "" },
    { { 228, 195, 93 }, "Gold", "" },
    { { 165, 42, 42 }, "Dark Brown", "" },
    { { 213, 176, 212 }, "Pale Violet", "" },
    { { 252, 242, 148 }, "Pale Yellow", "" },
    { { 240, 208, 192 }, "Pale Pink", "" },
    { { 255, 192, 0 }, "Peach", "" },
    { { 201, 164, 128 }, "Beige", "" },
    { { 155, 61, 75 }, "Wine Red", "" },
    { { 160, 184, 204 }, "Pale Sky", "" },
    { { 127, 194, 28 }, "Yellow Green", "" },
    { { 185, 185, 185 }, "Silver Grey", "" },
    { { 160, 160, 160 }, "Grey", "" },
    { { 152, 214, 189 }, "Pale Aqua", "" },
    { { 184, 240, 240 }, "Baby Blue", "" },
    { { 54, 139, 160 }, "Powder Blue", "" },
    { { 79, 131, 171 }, "Bright Blue", "" },
    { { 56, 106, 145 }, "Slate Blue", "" },
    { { 0, 32, 107 }, "Nave Blue", "" },
    { { 229, 197, 202 }, "Salmon Pink", "" },
    { { 249, 103, 107 }, "Coral", "" },
    { { 227, 49, 31 }, "Burnt Orange", "" },
    { { 226, 161, 136 }, "Cinnamon", "" },
    { { 181, 148, 116 }, "Umber", "" },
    { { 228, 207, 153 }, "Blonde", "" },
    { { 225, 203, 0 }, "Sunflower", "" },
    { { 225, 173, 212 }, "Orchid Pink", "" },
    { { 195, 0, 126 }, "Peony Purple", "" },
    { { 128, 0, 75 }, "Burgundy", "" },
    { { 160, 96, 176 }, "Royal Purple", "" },
    { { 192, 64, 32 }, "Cardinal Red", "" },
    { { 202, 224, 192 }, "Opal Green", "" },
    { { 137, 152, 86 }, "Moss Green", "" },
    { { 0, 170, 0 }, "Meadow Green", "" },
    { { 33, 138, 33 }, "Dark Green", "" },
    { { 93, 174, 148 }, "Aquamarine", "" },
    { { 76, 191, 143 }, "Emerald Green", "" },
    { { 0, 119, 114 }, "Peacock Green", "" },
    { { 112, 112, 112 }, "Dark Grey", "" },
    { { 242, 255, 255 }, "Ivory White", "" },
    { { 177, 88, 24 }, "Hazel", "" },
    { { 203, 138, 7 }, "Toast", "" },
    { { 247, 146, 123 }, "Salmon", "" },
    { { 152, 105, 45 }, "Cocoa Brown", "" },
    { { 162, 113, 72 }, "Sienna", "" },
    { { 123, 85, 74 }, "Sepia", "" },
    { { 79, 57, 70 }, "Dark Sepia", "" },
    { { 82, 58, 151 }, "Violet Blue", "" },
    { { 0, 0, 160 }, "Blue Ink", "" },
    { { 0, 150, 222 }, "Solar Blue", "" },
    { { 178, 221, 83 }, "Green Dust", "" },
    { { 250, 143, 187 }, "Crimson", "" },
    { { 222, 100, 158 }, "Floral Pink", "" },
    { { 181, 80, 102 }, "Wine", "" },
    { { 94, 87, 71 }, "Olive Drab", "" },
    { { 76, 136, 31 }, "Meadow", "" },
    { { 228, 220, 121 }, "Mustard", "" },
    { { 203, 138, 26 }, "Yellow Ochre", "" },
    { { 198, 170, 66 }, "Old Gold", "" },
    { { 236, 176, 44 }, "Honeydew", "" },
    { { 248, 128, 64 }, "Tangerine", "" },
    { { 255, 229, 5 }, "Canary Yellow", "" },
    { { 250, 122, 122 }, "Vermillion", "" },
    { { 107, 224, 0 }, "Bright Green", "" },
    { { 56, 108, 174 }, "Ocean Blue", "" },
    { { 227, 196, 180 }, "Beige Grey", "" },
    { { 227, 172, 129 }, "Bamboo", "" }
};

#define HOOP_126X110 0
#define HOOP_110X110 1
#define HOOP_50X50 2
#define HOOP_140X200 3
#define HOOP_230X200 4

static const int pcmThreadCount = 65;
static const EmbThread pcmThreads[] = {
    { { 0x00, 0x00, 0x00 }, "PCM Color 1", "" },
    { { 0x00, 0x00, 0x80 }, "PCM Color 2", "" },
    { { 0x00, 0x00, 0xFF }, "PCM Color 3", "" },
    { { 0x00, 0x80, 0x80 }, "PCM Color 4", "" },
    { { 0x00, 0xFF, 0xFF }, "PCM Color 5", "" },
    { { 0x80, 0x00, 0x80 }, "PCM Color 6", "" },
    { { 0xFF, 0x00, 0xFF }, "PCM Color 7", "" },
    { { 0x80, 0x00, 0x00 }, "PCM Color 8", "" },
    { { 0xFF, 0x00, 0x00 }, "PCM Color 9", "" },
    { { 0x00, 0x80, 0x00 }, "PCM Color 10", "" },
    { { 0x00, 0xFF, 0x00 }, "PCM Color 11", "" },
    { { 0x80, 0x80, 0x00 }, "PCM Color 12", "" },
    { { 0xFF, 0xFF, 0x00 }, "PCM Color 13", "" },
    { { 0x80, 0x80, 0x80 }, "PCM Color 14", "" },
    { { 0xC0, 0xC0, 0xC0 }, "PCM Color 15", "" },
    { { 0xFF, 0xFF, 0xFF }, "PCM Color 16", "" }
};


static const int pecThreadCount = 65;
static const EmbThread pecThreads[] = {
    { { 0, 0, 0 }, "Unknown", "" }, /* Index  0 */
    { { 14, 31, 124 }, "Prussian Blue", "" }, /* Index  1 */
    { { 10, 85, 163 }, "Blue", "" }, /* Index  2 */
    { { 0, 135, 119 }, "Teal Green", "" }, /* Index  3 */ /* TODO: Verify RGB value is correct */
    { { 75, 107, 175 }, "Cornflower Blue", "" }, /* Index  4 */
    { { 237, 23, 31 }, "Red", "" }, /* Index  5 */
    { { 209, 92, 0 }, "Reddish Brown", "" }, /* Index  6 */
    { { 145, 54, 151 }, "Magenta", "" }, /* Index  7 */
    { { 228, 154, 203 }, "Light Lilac", "" }, /* Index  8 */
    { { 145, 95, 172 }, "Lilac", "" }, /* Index  9 */
    { { 158, 214, 125 }, "Mint Green", "" }, /* Index 10 */ /* TODO: Verify RGB value is correct */
    { { 232, 169, 0 }, "Deep Gold", "" }, /* Index 11 */
    { { 254, 186, 53 }, "Orange", "" }, /* Index 12 */
    { { 255, 255, 0 }, "Yellow", "" }, /* Index 13 */
    { { 112, 188, 31 }, "Lime Green", "" }, /* Index 14 */
    { { 186, 152, 0 }, "Brass", "" }, /* Index 15 */
    { { 168, 168, 168 }, "Silver", "" }, /* Index 16 */
    { { 125, 111, 0 }, "Russet Brown", "" }, /* Index 17 */ /* TODO: Verify RGB value is correct */
    { { 255, 255, 179 }, "Cream Brown", "" }, /* Index 18 */
    { { 79, 85, 86 }, "Pewter", "" }, /* Index 19 */
    { { 0, 0, 0 }, "Black", "" }, /* Index 20 */
    { { 11, 61, 145 }, "Ultramarine", "" }, /* Index 21 */
    { { 119, 1, 118 }, "Royal Purple", "" }, /* Index 22 */
    { { 41, 49, 51 }, "Dark Gray", "" }, /* Index 23 */
    { { 42, 19, 1 }, "Dark Brown", "" }, /* Index 24 */
    { { 246, 74, 138 }, "Deep Rose", "" }, /* Index 25 */
    { { 178, 118, 36 }, "Light Brown", "" }, /* Index 26 */
    { { 252, 187, 197 }, "Salmon Pink", "" }, /* Index 27 */ /* TODO: Verify RGB value is correct */
    { { 254, 55, 15 }, "Vermillion", "" }, /* Index 28 */
    { { 240, 240, 240 }, "White", "" }, /* Index 29 */
    { { 106, 28, 138 }, "Violet", "" }, /* Index 30 */
    { { 168, 221, 196 }, "Seacrest", "" }, /* Index 31 */
    { { 37, 132, 187 }, "Sky Blue", "" }, /* Index 32 */
    { { 254, 179, 67 }, "Pumpkin", "" }, /* Index 33 */
    { { 255, 243, 107 }, "Cream Yellow", "" }, /* Index 34 */
    { { 208, 166, 96 }, "Khaki", "" }, /* Index 35 */
    { { 209, 84, 0 }, "Clay Brown", "" }, /* Index 36 */
    { { 102, 186, 73 }, "Leaf Green", "" }, /* Index 37 */
    { { 19, 74, 70 }, "Peacock Blue", "" }, /* Index 38 */
    { { 135, 135, 135 }, "Gray", "" }, /* Index 39 */
    { { 216, 204, 198 }, "Warm Gray", "" }, /* Index 40 */ /* TODO: Verify RGB value is correct */
    { { 67, 86, 7 }, "Dark Olive", "" }, /* Index 41 */
    { { 253, 217, 222 }, "Flesh Pink", "" }, /* Index 42 */ /* TODO: Verify RGB value is correct */
    { { 249, 147, 188 }, "Pink", "" }, /* Index 43 */
    { { 0, 56, 34 }, "Deep Green", "" }, /* Index 44 */
    { { 178, 175, 212 }, "Lavender", "" }, /* Index 45 */
    { { 104, 106, 176 }, "Wisteria Violet", "" }, /* Index 46 */
    { { 239, 227, 185 }, "Beige", "" }, /* Index 47 */
    { { 247, 56, 102 }, "Carmine", "" }, /* Index 48 */
    { { 181, 75, 100 }, "Amber Red", "" }, /* Index 49 */ /* TODO: Verify RGB value is correct */
    { { 19, 43, 26 }, "Olive Green", "" }, /* Index 50 */
    { { 199, 1, 86 }, "Dark Fuschia", "" }, /* Index 51 */ /* TODO: Verify RGB value is correct */
    { { 254, 158, 50 }, "Tangerine", "" }, /* Index 52 */
    { { 168, 222, 235 }, "Light Blue", "" }, /* Index 53 */
    { { 0, 103, 62 }, "Emerald Green", "" }, /* Index 54 */ /* TODO: Verify RGB value is correct */
    { { 78, 41, 144 }, "Purple", "" }, /* Index 55 */
    { { 47, 126, 32 }, "Moss Green", "" }, /* Index 56 */
    { { 255, 204, 204 }, "Flesh Pink", "" }, /* Index 57 */ /* TODO: Verify RGB value is correct */ /* TODO: Flesh Pink is Index 42, is this Index incorrect? */
    { { 255, 217, 17 }, "Harvest Gold", "" }, /* Index 58 */
    { { 9, 91, 166 }, "Electric Blue", "" }, /* Index 59 */
    { { 240, 249, 112 }, "Lemon Yellow", "" }, /* Index 60 */
    { { 227, 243, 91 }, "Fresh Green", "" }, /* Index 61 */
    { { 255, 153, 0 }, "Orange", "" }, /* Index 62 */ /* TODO: Verify RGB value is correct */ /* TODO: Orange is Index 12, is this Index incorrect? */
    { { 255, 240, 141 }, "Cream Yellow", "" }, /* Index 63 */ /* TODO: Verify RGB value is correct */ /* TODO: Cream Yellow is Index 34, is this Index incorrect? */
    { { 255, 200, 200 }, "Applique", "" } /* Index 64 */
};

static const char imageWithFrame[38][48] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 },
    { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};


/*****************************************
 * SHV Colors
 ****************************************/
static const int shvThreadCount = 42;
static const EmbThread shvThreads[] = {
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 255 }, "Blue", "TODO:CATALOG_NUMBER" },
    { { 51, 204, 102 }, "Green", "TODO:CATALOG_NUMBER" },
    { { 255, 0, 0 }, "Red", "TODO:CATALOG_NUMBER" },
    { { 255, 0, 255 }, "Purple", "TODO:CATALOG_NUMBER" },
    { { 255, 255, 0 }, "Yellow", "TODO:CATALOG_NUMBER" },
    { { 127, 127, 127 }, "Grey", "TODO:CATALOG_NUMBER" },
    { { 51, 154, 255 }, "Light Blue", "TODO:CATALOG_NUMBER" },
    { { 0, 255, 0 }, "Light Green", "TODO:CATALOG_NUMBER" },
    { { 255, 127, 0 }, "Orange", "TODO:CATALOG_NUMBER" },
    { { 255, 160, 180 }, "Pink", "TODO:CATALOG_NUMBER" },
    { { 153, 75, 0 }, "Brown", "TODO:CATALOG_NUMBER" },
    { { 255, 255, 255 }, "White", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 255, 127, 127 }, "Light Red", "TODO:CATALOG_NUMBER" },
    { { 255, 127, 255 }, "Light Purple", "TODO:CATALOG_NUMBER" },
    { { 255, 255, 153 }, "Light Yellow", "TODO:CATALOG_NUMBER" },
    { { 192, 192, 192 }, "Light Grey", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 255, 165, 65 }, "Light Orange", "TODO:CATALOG_NUMBER" },
    { { 255, 204, 204 }, "Light Pink", "TODO:CATALOG_NUMBER" },
    { { 175, 90, 10 }, "Light Brown", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 127 }, "Dark Blue", "TODO:CATALOG_NUMBER" },
    { { 0, 127, 0 }, "Dark Green", "TODO:CATALOG_NUMBER" },
    { { 127, 0, 0 }, "Dark Red", "TODO:CATALOG_NUMBER" },
    { { 127, 0, 127 }, "Dark Purple", "TODO:CATALOG_NUMBER" },
    { { 200, 200, 0 }, "Dark Yellow", "TODO:CATALOG_NUMBER" },
    { { 60, 60, 60 }, "Dark Gray", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 0, 0, 0 }, "Black", "TODO:CATALOG_NUMBER" },
    { { 232, 63, 0 }, "Dark Orange", "TODO:CATALOG_NUMBER" },
    { { 255, 102, 122 }, "Dark Pink", "TODO:CATALOG_NUMBER" }
};


#define ELEMENT_XML               0
#define ELEMENT_A                 1
#define ELEMENT_ANIMATE           2
#define ELEMENT_ANIMATE_COLOR     3
#define ELEMENT_ANIMATE_MOTION    4
#define ELEMENT_ANIMATE_TRANSFORM 5
#define ELEMENT_ANIMATION         6
#define ELEMENT_AUDIO             7
#define ELEMENT_CIRCLE            8
#define ELEMENT_DEFS              9
#define ELEMENT_DESC              10
#define ELEMENT_DISCARD           11
#define ELEMENT_ELLIPSE           12
#define ELEMENT_FONT              13
#define ELEMENT_FONT_FACE         14
#define ELEMENT_FONT_FACE_SRC     15
#define ELEMENT_FONT_FACE_URI     16
#define ELEMENT_FOREIGN_OBJECT    17
#define ELEMENT_G                 18
#define ELEMENT_GLYPH             19
#define ELEMENT_HANDLER           20
#define ELEMENT_HKERN             21
#define ELEMENT_IMAGE             22
#define ELEMENT_LINE              23
#define ELEMENT_LINEAR_GRADIENT   24
#define ELEMENT_LISTENER          25
#define ELEMENT_METADATA          26
#define ELEMENT_MISSING_GLYPH     27
#define ELEMENT_MPATH             28
#define ELEMENT_PATH              29
#define ELEMENT_POLYGON           30
#define ELEMENT_POLYLINE          31
#define ELEMENT_PREFETCH          32
#define ELEMENT_RADIAL_GRADIENT   33
#define ELEMENT_RECT              34
#define ELEMENT_SCRIPT            35
#define ELEMENT_SET               36
#define ELEMENT_SOLID_COLOR       37
#define ELEMENT_STOP              38
#define ELEMENT_SVG               39
#define ELEMENT_SWITCH            40
#define ELEMENT_TBREAK            41
#define ELEMENT_TEXT              42
#define ELEMENT_TEXT_AREA         43
#define ELEMENT_TITLE             44
#define ELEMENT_TSPAN             45
#define ELEMENT_USE               46
#define ELEMENT_VIDEO             47
#define ELEMENT_UNKNOWN           48

static const char* svg_element_tokens[] = {
    "?xml", "a", "animate", "animateColor", "animateMotion", "animateTransform", "animation",
    "audio", "circle", "defs", "desc", "discard", "ellipse",
    "font", "font-face", "font-face-src", "font-face-uri", "foreignObject",
    "g", "glyph", "handler", "hkern", "image", "line", "linearGradient", "listener",
    "metadata", "missing-glyph", "mpath", "path", "polygon", "polyline", "prefetch",
    "radialGradient", "rect", "script", "set", "solidColor", "stop", "svg", "switch",
    "tbreak", "text", "textArea", "title", "tspan", "use", "video", "\0"
    /* "altGlyph", "altGlyphDef", "altGlyphItem", "clipPath", "color-profile", "cursor",
     * "feBlend", "feColorMatrix", "feComponentTransfer", "feComposite", "feConvolveMatrix",
     * "feDiffuseLighting", "feDisplacementMap", "feDistantLight", "feFlood",
     * "feFuncA", "feFuncB", "feFuncG", "feFuncR", "feGaussianBlur", "feImage",
     * "feMerge", "feMergeNode", "feMorphology", "feOffset", "fePointLight",
     * "feSpecularLighting", "feSpotLight", "feTile", "feTurbulence", "filter",
     * "font-face-format", "font-face-name", "glyphRef", "marker", "mask",
     * "pattern", "style", "symbol", "textPath", "tref", "view", "vkern"
     * TODO: not implemented SVG Full 1.1 Spec Elements
     */
};

static const char* svg_media_property_tokens[] = {
    "audio-level", "buffered-rendering", "display", "image-rendering",
    "pointer-events", "shape-rendering", "text-rendering", "viewport-fill",
    "viewport-fill-opacity", "visibility", "\0"
};

static const char* svg_property_tokens[] = {
    "audio-level", "buffered-rendering", "color", "color-rendering", "direction",
    "display", "display-align", "fill", "fill-opacity", "fill-rule",
    "font-family", "font-size", "font-style", "font-variant", "font-weight",
    "image-rendering", "line-increment", "opacity", "pointer-events",
    "shape-rendering", "solid-color", "solid-opacity", "stop-color",
    "stop-opacity", "stroke", "stroke-dasharray", "stroke-linecap", "stroke-linejoin",
    "stroke-miterlimit", "stroke-opacity", "stroke-width", "text-align",
    "text-anchor", "text-rendering", "unicode-bidi", "vector-effect",
    "viewport-fill", "viewport-fill-opacity", "visibility", "\0"
};


/* attribute tokens */

static const char* xmlTokens[] = { "encoding", "standalone", "version", "/", "\0" };

static const char* linkTokens[] = {
        "about", "class", "content",
        "datatype", "externalResourcesRequired", "focusHighlight",
        "focusable", "id", "nav-down", "nav-down-left",
        "nav-down-right", "nav-left", "nav-next", "nav-prev",
        "nav-right", "nav-up", "nav-up-left", "nav-up-right",
        "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats",
        "resource", "rev", "role", "systemLanguage", "target",
        "transform", "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title",
        "xlink:type", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* animateTokens[] = {
        "about", "accumulate", "additive", "attributeName", "attributeType",
        "begin", "by", "calcMode", "class", "content", "datatype", "dur", "end",
        "fill", "from", "id", "keySplines", "keyTimes", "max", "min", "property",
        "rel", "repeatCount", "repeatDur", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "restart", "rev", "role", "systemLanguage", "to", "typeof", "values",
        "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* animateColorTokens[] = {
        "about", "accumulate", "additive", "attributeName", "attributeType",
        "begin", "by", "calcMode", "class", "content", "datatype", "dur",
        "end", "fill", "from", "id",
        "keySplines", "keyTimes", "max", "min", "property", "rel",
        "repeatCount", "repeatDur", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats",
        "resource", "restart", "rev", "role", "systemLanguage",
        "to", "typeof", "values", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title",
        "xlink:type", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* animateMotionTokens[] = {
        "about", "accumulate", "additive", "begin", "by", "calcMode", "class",
        "content", "datatype", "dur", "end", "fill", "from", "id", "keyPoints",
        "keySplines", "keyTimes", "max", "min", "origin", "path", "property",
        "rel", "repeatCount", "repeatDur", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "restart", "rev", "role", "rotate", "systemLanguage", "to", "typeof",
        "values", "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* animateTransformTokens[] = {
        "about", "accumulate", "additive", "attributeName", "attributeType",
        "begin", "by", "calcMode", "class", "content", "datatype", "dur", "end",
        "fill", "from", "id", "keySplines", "keyTimes", "max", "min",
        "property", "rel", "repeatCount", "repeatDur", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "restart", "rev", "role", "systemLanguage", "to", "type", "typeof",
        "values", "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* animationTokens[] = {
        "about", "begin", "class", "content", "datatype", "dur", "end",
        "externalResourcesRequired", "fill", "focusHighlight", "focusable",
        "height", "id", "initialVisibility", "max", "min", "nav-down",
        "nav-down-left", "nav-down-right", "nav-left", "nav-next", "nav-prev",
        "nav-right", "nav-up", "nav-up-left", "nav-up-right",
        "preserveAspectRatio", "property", "rel", "repeatCount", "repeatDur",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "restart", "rev", "role", "syncBehavior",
        "syncMaster", "syncTolerance", "systemLanguage", "transform", "typeof",
        "width", "x", "xlink:actuate", "xlink:arcrole", "xlink:href",
        "xlink:role", "xlink:show", "xlink:title", "xlink:type", "xml:base",
        "xml:id", "xml:lang", "xml:space", "y", "/", "\0"
    };

static const char* audioTokens[] = {
        "about", "begin", "class", "content", "datatype", "dur", "end",
        "externalResourcesRequired", "fill", "id", "max", "min", "property",
        "rel", "repeatCount", "repeatDur", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "restart", "rev", "role", "syncBehavior", "syncMaster", "syncTolerance",
        "systemLanguage", "type", "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* circleTokens[] = {
        "about", "class", "content", "cx", "cy", "datatype", "focusHighlight",
        "focusable", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "property", "r", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "xml:base", "xml:id", "xml:lang", "xml:space",
        "/", "\0"
    };

static const char* defsTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "resource", "rev", "role", "typeof", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* descTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "typeof", "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* discardTokens[] = {
        "about", "begin", "class", "content", "datatype", "id", "property",
        "rel", "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "typeof", "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* ellipseTokens[] = {
        "about", "class", "content", "cx", "cy", "datatype", "focusHighlight",
        "focusable", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "rx", "ry", "systemLanguage", "transform", "typeof",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* fontTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "horiz-adv-x", "horiz-origin-x", "id", "property", "rel", "resource",
        "rev", "role", "typeof", "xml:base", "xml:id", "xml:lang", "xml:space",
        "/", "\0"
    };

static const char* fontFaceTokens[] = {
        "about", "accent-height", "alphabetic", "ascent", "bbox", "cap-height",
        "class", "content", "datatype", "descent", "externalResourcesRequired",
        "font-family", "font-stretch", "font-style", "font-variant",
        "font-weight", "hanging", "id", "ideographic", "mathematical",
        "overline-position", "overline-thickness", "panose-1", "property",
        "rel", "resource", "rev", "role", "slope", "stemh", "stemv",
        "strikethrough-position", "strikethrough-thickness", "typeof",
        "underline-position", "underline-thickness", "unicode-range",
        "units-per-em", "widths", "x-height", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* fontFaceSrcTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "resource", "rev", "role", "typeof", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* fontFaceUriTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "id", "property", "rel", "resource", "rev", "role",
        "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title",
        "xlink:type", "xml:base", "xml:id", "xml:lang",
        "xml:space", "/", "\0"
    };

static const char* foreignObjectTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "focusHighlight", "focusable", "height", "id", "nav-down",
        "nav-down-left", "nav-down-right", "nav-left", "nav-next",
        "nav-prev", "nav-right", "nav-up", "nav-up-left", "nav-up-right",
        "property", "rel", "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "width", "x", "xlink:actuate",
        "xlink:arcrole", "xlink:href", "xlink:role", "xlink:show",
        "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "y", "/", "\0"
    };

static const char* groupTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "focusHighlight", "focusable", "id", "nav-down", "nav-down-left",
        "nav-down-right", "nav-left", "nav-next", "nav-prev", "nav-right",
        "nav-up", "nav-up-left", "nav-up-right", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "xml:base", "xml:id", "xml:lang", "xml:space",
        "/", "\0"
    };

static const char* glyphTokens[] = {
        "about", "arabic-form", "class", "content", "d", "datatype",
        "glyph-name", "horiz-adv-x", "id", "lang", "property", "rel",
        "resource", "rev", "role", "typeof", "unicode", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* handlerTokens[] = {
        "about", "class", "content", "datatype", "ev:event",
        "externalResourcesRequired", "id", "property", "rel", "resource",
        "rev", "role", "type", "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* hkernTokens[] = {
        "about", "class", "content", "datatype", "g1", "g2", "id", "k",
        "property", "rel", "resource", "rev", "role", "typeof", "u1", "u2",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* imageTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "focusHighlight", "focusable", "height", "id", "nav-down",
        "nav-down-left", "nav-down-right", "nav-left", "nav-next", "nav-prev",
        "nav-right", "nav-up", "nav-up-left", "nav-up-right", "opacity",
        "preserveAspectRatio", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "systemLanguage", "transform", "type", "typeof", "width",
        "x", "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "y", "/", "\0"
    };

static const char* lineTokens[] = {
        "about", "class", "content", "datatype", "focusHighlight", "focusable",
        "id", "nav-down", "nav-down-left", "nav-down-right", "nav-left",
        "nav-next", "nav-prev", "nav-right", "nav-up", "nav-up-left",
        "nav-up-right", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "systemLanguage", "transform", "typeof", "x1", "x2",
        "xml:base", "xml:id", "xml:lang", "xml:space", "y1", "y2", "/", "\0"
    };

static const char* linearGradientTokens[] = {
        "about", "class", "content", "datatype", "gradientUnits", "id",
        "property", "rel", "resource", "rev", "role", "typeof", "x1", "x2",
        "xml:base", "xml:id", "xml:lang", "xml:space", "y1", "y2", "/", "\0"
    };

static const char* listenerTokens[] = {
        "about", "class", "content", "datatype", "defaultAction", "event",
        "handler", "id", "observer", "phase", "propagate", "property", "rel",
        "resource", "rev", "role", "target", "typeof", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* metadataTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "typeof", "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* missingGlyphTokens[] = {
        "about", "class", "content", "d", "datatype", "horiz-adv-x", "id",
        "property", "rel", "resource", "rev", "role", "typeof", "xml:base",
        "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* mpathTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "resource", "rev", "role", "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* pathTokens[] = {
        "about", "class", "content", "d", "datatype", "focusHighlight",
        "focusable", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "pathLength", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "xml:base", "xml:id", "xml:lang", "xml:space",
        "/", "\0"
    };

static const char* polygonTokens[] = {
        "about", "class", "content", "datatype", "focusHighlight", "focusable",
        "id", "nav-down", "nav-down-left", "nav-down-right", "nav-left",
        "nav-next", "nav-prev", "nav-right", "nav-up", "nav-up-left",
        "nav-up-right", "points", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "systemLanguage", "transform", "typeof", "xml:base",
        "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* polylineTokens[] = {
        "about", "class", "content", "datatype", "focusHighlight", "focusable",
        "id", "nav-down", "nav-down-left", "nav-down-right", "nav-left",
        "nav-next", "nav-prev", "nav-right", "nav-up", "nav-up-left",
        "nav-up-right", "points", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "systemLanguage", "transform", "typeof", "xml:base",
        "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* prefetchTokens[] = {
        "about", "bandwidth", "class", "content", "datatype", "id",
        "mediaCharacterEncoding", "mediaContentEncodings", "mediaSize",
        "mediaTime", "property", "rel", "resource", "rev", "role", "typeof",
        "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* radialGradientTokens[] = {
        "about", "class", "content", "cx", "cy", "datatype", "gradientUnits",
        "id", "property", "r", "rel", "resource", "rev", "role", "typeof",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* rectTokens[] = {
        "about", "class", "content", "datatype", "focusHighlight", "focusable",
        "height", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "rx", "ry", "systemLanguage", "transform", "typeof",
        "width", "x", "xml:base", "xml:id", "xml:lang", "xml:space", "y",
        "/", "\0"
    };

static const char* scriptTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "id", "property", "rel", "resource", "rev", "role", "type", "typeof",
        "xlink:actuate", "xlink:arcrole", "xlink:href", "xlink:role",
        "xlink:show", "xlink:title", "xlink:type", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* setTokens[] = {
        "about", "attributeName", "attributeType", "begin", "class", "content",
        "datatype", "dur", "end", "fill", "id", "max", "min", "property", "rel",
        "repeatCount", "repeatDur", "requiredExtensions", "requiredFeatures",
        "requiredFonts", "requiredFormats", "resource", "rev", "role",
        "systemLanguage", "to", "typeof", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
        "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

#define SOLIDCOLOR_ATTR        1
#define STOP_ATTR              2
#define SVG_ATTR               2
#define SWITCH_ATTR            3
#define TBREAK_ATTR            4
#define TEXT_ATTR              5
#define TEXTAREA_ATTR          6
#define TITLE_ATTR             7
#define TSPAN_ATTR             8
#define USE_ATTR               9
#define VIDEO_ATTR             10


static const char* switchTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "focusHighlight", "focusable", "id", "nav-down", "nav-down-left",
        "nav-down-right", "nav-left", "nav-next", "nav-prev", "nav-right",
        "nav-up", "nav-up-left", "nav-up-right", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "xml:base", "xml:id", "xml:lang", "xml:space",
        "/", "\0"
    };

static const char* tbreakTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "typeof", "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* textTokens[] = {
        "about", "class", "content", "datatype", "editable", "focusHighlight",
        "focusable", "id", "nav-down", "nav-down-left", "nav-down-right",
        "nav-left", "nav-next", "nav-prev", "nav-right", "nav-up",
        "nav-up-left", "nav-up-right", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "rotate", "systemLanguage", "transform", "typeof", "x",
        "xml:base", "xml:id", "xml:lang", "xml:space", "y", "/", "\0"
    };

static const char* textAreaTokens[] = {
        "about", "class", "content", "datatype", "editable", "focusHighlight",
        "focusable", "height", "id", "nav-down", "nav-down-left",
        "nav-down-right", "nav-left", "nav-next", "nav-prev", "nav-right",
        "nav-up", "nav-up-left", "nav-up-right", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "width", "x", "xml:base", "xml:id", "xml:lang",
        "xml:space", "y", "/", "\0"
    };

static const char* titleTokens[] = {
        "about", "class", "content", "datatype", "id", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "typeof", "xml:base", "xml:id", "xml:lang", "xml:space", "/", "\0"
    };

static const char* tspanTokens[] = {
        "about", "class", "content", "datatype", "focusHighlight", "focusable",
        "id", "nav-down", "nav-down-left", "nav-down-right", "nav-left",
        "nav-next", "nav-prev", "nav-right", "nav-up", "nav-up-left",
        "nav-up-right", "property", "rel", "requiredExtensions",
        "requiredFeatures", "requiredFonts", "requiredFormats", "resource",
        "rev", "role", "systemLanguage", "typeof", "xml:base", "xml:id",
        "xml:lang", "xml:space", "/", "\0"
    };

static const char* useTokens[] = {
        "about", "class", "content", "datatype", "externalResourcesRequired",
        "focusHighlight", "focusable", "id", "nav-down", "nav-down-left",
        "nav-down-right", "nav-left", "nav-next", "nav-prev", "nav-right",
        "nav-up", "nav-up-left", "nav-up-right", "property", "rel",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "rev", "role", "systemLanguage",
        "transform", "typeof", "x", "xlink:actuate", "xlink:arcrole",
        "xlink:href", "xlink:role", "xlink:show", "xlink:title", "xlink:type",
        "xml:base", "xml:id", "xml:lang", "xml:space", "y", "/", "\0"
    };

static const char* videoTokens[] = {
        "about", "begin", "class", "content", "datatype", "dur", "end",
        "externalResourcesRequired", "fill", "focusHighlight", "focusable",
        "height", "id", "initialVisibility", "max", "min", "nav-down",
        "nav-down-left", "nav-down-right", "nav-left", "nav-next", "nav-prev",
        "nav-right", "nav-up", "nav-up-left", "nav-up-right", "overlay",
        "preserveAspectRatio", "property", "rel", "repeatCount", "repeatDur",
        "requiredExtensions", "requiredFeatures", "requiredFonts",
        "requiredFormats", "resource", "restart", "rev", "role", "syncBehavior",
        "syncMaster", "syncTolerance", "systemLanguage", "transform",
        "transformBehavior", "type", "typeof", "width", "x", "xlink:actuate",
        "xlink:arcrole", "xlink:href", "xlink:role", "xlink:show",
        "xlink:title", "xlink:type", "xml:base", "xml:id", "xml:lang",
        "xml:space", "y", "/", "\0"
    };


/* Triple pointer: this could be confusing to a new programmer to the project.
 *
 * This could be a 0-1 matrix of element against attribute.
 *
 * Or we can set an unsigned char index then it takes one level.
 */
static const char **token_lists[] = {
    xmlTokens, linkTokens, animateTokens, animateColorTokens, animateMotionTokens,
    animateTransformTokens, animationTokens, audioTokens, circleTokens, defsTokens,
    descTokens, discardTokens, ellipseTokens, fontTokens, fontFaceTokens,
    fontFaceSrcTokens, fontFaceUriTokens, foreignObjectTokens, groupTokens,
    glyphTokens, handlerTokens, hkernTokens, imageTokens, lineTokens,
    linearGradientTokens, listenerTokens, metadataTokens, missingGlyphTokens,
    mpathTokens, pathTokens, polygonTokens, polylineTokens, prefetchTokens,
    radialGradientTokens, rectTokens, scriptTokens, setTokens, solidColorTokens,
    stopTokens, svgTokens, switchTokens, tbreakTokens, textTokens, textAreaTokens,
    titleTokens, tspanTokens, useTokens, videoTokens
};

static const char *stitchTypeLabels[] = {
    "STITCH", "JUMP", "TRIM", "COLOR", "END", "UNKNOWN"
};

static const char csvByLine[] = \
    "\"#\",\"Embroidermodder 2 CSV Embroidery File\"\n" \
    "\"#\",\"http://embroidermodder.github.io\"\n" \
    "\n";
static const char csvNotes[] = \  
    "\"#\",\"General Notes:\"\n" \
    "\"#\",\"This file can be read by Excel or LibreOffice as CSV (Comma Separated Value) or with a text editor.\"\n" \
    "\"#\",\"Lines beginning with # are comments.\"\n" \
    "\"#\",\"Lines beginning with > are variables: [VAR_NAME], [VAR_VALUE]\"\n" \
    "\"#\",\"Lines beginning with $ are threads: [THREAD_NUMBER], [RED], [GREEN], [BLUE], [DESCRIPTION], [CATALOG_NUMBER]\"\n" \
    "\"#\",\"Lines beginning with * are stitch entries: [STITCH_TYPE], [X], [Y]\"\n" \
    "\n";
static const char csvStitchEntryNotes1[] = \
    "\"#\",\"Stitch Entry Notes:\"\n" \
    "\"#\",\"STITCH instructs the machine to move to the position [X][Y] and then make a stitch.\"\n" \
    "\"#\",\"JUMP instructs the machine to move to the position [X][Y] without making a stitch.\"\n" \
    "\"#\",\"TRIM instructs the machine to cut the thread before moving to the position [X][Y] without making a stitch.\"\n";
static const char csvStitchEntryNotes2[] = \
    "\"#\",\"COLOR instructs the machine to stop temporarily so that the user can change to a different color thread before resuming.\"\n" \
    "\"#\",\"END instructs the machine that the design is completed and there are no further instructions.\"\n" \
    "\"#\",\"UNKNOWN encompasses instructions that may not be supported currently.\"\n" \
    "\"#\",\"[X] and [Y] are absolute coordinates in millimeters (mm).\"\n" \
    "\n";


static const unsigned char vipDecodingTable[] = {
    0x2E, 0x82, 0xE4, 0x6F, 0x38, 0xA9, 0xDC, 0xC6, 0x7B, 0xB6, 0x28, 0xAC, 0xFD, 0xAA, 0x8A, 0x4E,
    0x76, 0x2E, 0xF0, 0xE4, 0x25, 0x1B, 0x8A, 0x68, 0x4E, 0x92, 0xB9, 0xB4, 0x95, 0xF0, 0x3E, 0xEF,
    0xF7, 0x40, 0x24, 0x18, 0x39, 0x31, 0xBB, 0xE1, 0x53, 0xA8, 0x1F, 0xB1, 0x3A, 0x07, 0xFB, 0xCB,
    0xE6, 0x00, 0x81, 0x50, 0x0E, 0x40, 0xE1, 0x2C, 0x73, 0x50, 0x0D, 0x91, 0xD6, 0x0A, 0x5D, 0xD6,
    0x8B, 0xB8, 0x62, 0xAE, 0x47, 0x00, 0x53, 0x5A, 0xB7, 0x80, 0xAA, 0x28, 0xF7, 0x5D, 0x70, 0x5E,
    0x2C, 0x0B, 0x98, 0xE3, 0xA0, 0x98, 0x60, 0x47, 0x89, 0x9B, 0x82, 0xFB, 0x40, 0xC9, 0xB4, 0x00,
    0x0E, 0x68, 0x6A, 0x1E, 0x09, 0x85, 0xC0, 0x53, 0x81, 0xD1, 0x98, 0x89, 0xAF, 0xE8, 0x85, 0x4F,
    0xE3, 0x69, 0x89, 0x03, 0xA1, 0x2E, 0x8F, 0xCF, 0xED, 0x91, 0x9F, 0x58, 0x1E, 0xD6, 0x84, 0x3C,
    0x09, 0x27, 0xBD, 0xF4, 0xC3, 0x90, 0xC0, 0x51, 0x1B, 0x2B, 0x63, 0xBC, 0xB9, 0x3D, 0x40, 0x4D,
    0x62, 0x6F, 0xE0, 0x8C, 0xF5, 0x5D, 0x08, 0xFD, 0x3D, 0x50, 0x36, 0xD7, 0xC9, 0xC9, 0x43, 0xE4,
    0x2D, 0xCB, 0x95, 0xB6, 0xF4, 0x0D, 0xEA, 0xC2, 0xFD, 0x66, 0x3F, 0x5E, 0xBD, 0x69, 0x06, 0x2A,
    0x03, 0x19, 0x47, 0x2B, 0xDF, 0x38, 0xEA, 0x4F, 0x80, 0x49, 0x95, 0xB2, 0xD6, 0xF9, 0x9A, 0x75,
    0xF4, 0xD8, 0x9B, 0x1D, 0xB0, 0xA4, 0x69, 0xDB, 0xA9, 0x21, 0x79, 0x6F, 0xD8, 0xDE, 0x33, 0xFE,
    0x9F, 0x04, 0xE5, 0x9A, 0x6B, 0x9B, 0x73, 0x83, 0x62, 0x7C, 0xB9, 0x66, 0x76, 0xF2, 0x5B, 0xC9,
    0x5E, 0xFC, 0x74, 0xAA, 0x6C, 0xF1, 0xCD, 0x93, 0xCE, 0xE9, 0x80, 0x53, 0x03, 0x3B, 0x97, 0x4B,
    0x39, 0x76, 0xC2, 0xC1, 0x56, 0xCB, 0x70, 0xFD, 0x3B, 0x3E, 0x52, 0x57, 0x81, 0x5D, 0x56, 0x8D,
    0x51, 0x90, 0xD4, 0x76, 0xD7, 0xD5, 0x16, 0x02, 0x6D, 0xF2, 0x4D, 0xE1, 0x0E, 0x96, 0x4F, 0xA1,
    0x3A, 0xA0, 0x60, 0x59, 0x64, 0x04, 0x1A, 0xE4, 0x67, 0xB6, 0xED, 0x3F, 0x74, 0x20, 0x55, 0x1F,
    0xFB, 0x23, 0x92, 0x91, 0x53, 0xC8, 0x65, 0xAB, 0x9D, 0x51, 0xD6, 0x73, 0xDE, 0x01, 0xB1, 0x80,
    0xB7, 0xC0, 0xD6, 0x80, 0x1C, 0x2E, 0x3C, 0x83, 0x63, 0xEE, 0xBC, 0x33, 0x25, 0xE2, 0x0E, 0x7A,
    0x67, 0xDE, 0x3F, 0x71, 0x14, 0x49, 0x9C, 0x92, 0x93, 0x0D, 0x26, 0x9A, 0x0E, 0xDA, 0xED, 0x6F,
    0xA4, 0x89, 0x0C, 0x1B, 0xF0, 0xA1, 0xDF, 0xE1, 0x9E, 0x3C, 0x04, 0x78, 0xE4, 0xAB, 0x6D, 0xFF,
    0x9C, 0xAF, 0xCA, 0xC7, 0x88, 0x17, 0x9C, 0xE5, 0xB7, 0x33, 0x6D, 0xDC, 0xED, 0x8F, 0x6C, 0x18,
    0x1D, 0x71, 0x06, 0xB1, 0xC5, 0xE2, 0xCF, 0x13, 0x77, 0x81, 0xC5, 0xB7, 0x0A, 0x14, 0x0A, 0x6B,
    0x40, 0x26, 0xA0, 0x88, 0xD1, 0x62, 0x6A, 0xB3, 0x50, 0x12, 0xB9, 0x9B, 0xB5, 0x83, 0x9B, 0x37
};

char maxHeader[] = {
        0x56, 0x43, 0x53, 0x4D, 0xFC, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xF6, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x33, 0x37, 0x38,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4D, 0x61, 0x64, 0x65, 0x69, 0x72, 0x61, 0x20,
        0x52, 0x61, 0x79, 0x6F, 0x6E, 0x20, 0x34, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x38, 0x09, 0x31, 0x33, 0x30, 0x2F, 0x37, 0x30, 0x35, 0x20, 0x48, 0xFA, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00
    };

