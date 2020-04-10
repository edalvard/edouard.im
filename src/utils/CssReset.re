Css.(global("*", [boxSizing(borderBox)]));

Css.(
  global(
    "html",
    [fontFamily(`sansSerif), unsafe("WebkitTextSizeAdjust", "100%")],
  )
);

Css.(
  global(
    "body",
    [
      margin(zero),
      fontFamily(
        `custom(
          "-apple-system,BlinkMacSystemFont,Segoe UI,Helvetica,Arial,sans-serif,Apple Color Emoji,Segoe UI Emoji",
        ),
      ),
      fontSize(px(16)),
      lineHeight(`abs(1.5)),
      backgroundColor(hex("fff")),
      unsafe("WebkitFontSmoothing", "antialiased"),
    ],
  )
);

Css.(
  global(
    "h1",
    [
      fontSize(px(32)),
      margin3(~top=px(0), ~h=px(0), ~bottom=px(32)),
      lineHeight(`abs(1.)),
    ],
  )
);

Css.(
  global(
    "h2",
    [
      fontSize(px(24)),
      margin3(~top=px(0), ~h=px(0), ~bottom=px(32)),
      lineHeight(`abs(1.)),
    ],
  )
);

Css.(global("a", [textDecoration(none), color(hex("000"))]));

Css.(global("ul", [margin(zero)]));