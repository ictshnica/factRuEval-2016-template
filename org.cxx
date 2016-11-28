#encoding "utf-8"

OrgDescr -> AnyWord<kwtype="org_descr">;

QuotedWords -> AnyWord<l-quoted, r-quoted>;
QuotedWords -> AnyWord<l-quoted, ~r-quoted> AnyWord<l-quoted, ~r-quoted>*AnyWord<~l-quoted, r-quoted>;

Org -> OrgDescr interp(Object.Descr) AnyWord<h-reg1> interp(Object.Name; Object.Type="ORG");
Org -> OrgDescr interp(Object.Descr) AnyWord<l-quoted, r-quoted> interp(Object.Name; Object.Type="ORG");

Root -> Org;
