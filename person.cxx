#encoding "utf-8"

PersonName -> Word<kwtype="algfio">;
Person -> PersonName interp (Person.Name);
ProperName -> Word<h-reg1, gram='имя'>
              Word<h-reg1, gram='отч'>
              Word<h-reg1, gram='фам'>;
Person -> ProperName interp (ProperName);