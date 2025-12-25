# L10 - Projektpresentation och kursavslutning

## Dagordning
* Projektpresentationer (ca 10-15 minuter per grupp).
* Diskussion och frågor efter varje presentation.
* Kurssammanfattning och reflektion.
* Kursutvärdering och feedback.

## Mål med lektionen
* Presentera ert projekt för klassen och lärare.
* Demonstrera er testsvit och testresultat.
* Reflektera över lärdomar från kursen.
* Ge och ta emot konstruktiv feedback.

## Projektpresentation

### Presentationsformat
* **Tid**: 10-15 minuter per grupp + 5 minuter för frågor.
* **Format**: Projektpresentation, exempelvis med power point, samt live-demo.
* **Båda gruppmedlemmar** ska delta aktivt i presentationen.
* **Bedömning**: Presentationen ingår i projektbedömningen och betygsätts tillsammans med er inlämning.

### Vad ska presentationen innehålla?

1. **Introduktion** (1-2 minuter)
   * Kort översikt av projektet och testsviten.
   * Vilka testnivåer ni implementerat.

2. **Testningsstrategi** (2-3 minuter)
   * Er approach till enhetstester, komponenttester och integrationstester.
   * Hur ni använde virtuell hårdvaruplatform och stubklasser.
   * Utmaningar ni stötte på och hur ni löste dem.

3. **Demonstration** (4-6 minuter)
   * **Live-körning av testsviten**: Visa att testerna kompilerar och körs.
   * **Kodgenomgång**: Visa exempel på era tester (välj 1-2 intressanta testfall).
   * **För VG**: Demonstrera Python-skriptet för seriell kommunikation med hårdvaran.

4. **Resultat och lärdomar** (2-3 minuter)
   * Testresultat och täckning.
   * Eventuella buggar ni hittade och åtgärdade.
   * Vad fungerade bra? Vad skulle ni göra annorlunda?
   * Viktigaste lärdomar om testning av inbyggda system.

5. **Frågor och diskussion** (5 minuter)

### Tips för presentationen
* **Förbered er väl**: Testa teknik och demo i förväg.
* **Var konkreta**: Visa kod och resultat, inte bara prata om dem.
* **Fokusera på det intressanta**: Välj era bästa/mest utmanande tester att demonstrera.
* **Håll tiden**: Respektera tidsgränsen så alla grupper hinner presentera.
* **Var ärliga**: Det är OK att prata om utmaningar och vad som inte fungerade.

## Inlämning - Checklista

Kontrollera att ert projekt är komplett innan veckans slut:

- **Git-repository uppladdat på GitHub** (privat repository).
- **Lärare tillagd som collaborator**.
- **All testkod implementerad och fungerande**:
  - Enhetstester (GPIO, serial, timer, smart tempsensor, linjär regressionsmodell).
  - Komponenttester (Logik-implementationen).
  - Stubklasser implementerade.
- **Dokumentation**:
  - README-fil med instruktioner för att köra testerna.
  - Dokumentation av manuella integrationstester.
  - Sammanfattande rapport (max tre sidor) - kan inkluderas i README eller som separat dokument.
- **För VG**:
  - Python-skript för seriell kommunikation.
  - Dokumentation och användningsexempel för Python-skriptet.
  - Parametriserade tester där tillämpligt.
  - Komplett integrationstestdokumentation (>10 tester).

## Kurssammanfattning

### Vad vi har gått igenom

* **L01**: Introduktion till testautomation och Google Test.
* **L02-L04**: Unittester av drivers med en virtuell hårdvaruplatform.
* **L05-L07**: Stubklasser och komponenttestning.
* **L08**: Manuell SW/HW-integrationstestning på target.
* **L09**: Automatiserad testning med Python och seriell kommunikation.
* **L10**: Projektpresentation och avslutning.

### Viktiga koncept
* **Testnivåer**: Unit, component, integration och system.
* **Virtuell hårdvara**: Simulera hårdvara för snabbare och mer deterministiska tester.
* **Stubklasser**: Simulera beroenden för isolerad testning.
* **Interfaces**: Ökar testbarhet genom att möjliggöra stub-implementationer.
* **Automatisering**: Python-skript för att effektivisera repetitiva tester.

## Kursutvärdering
Vänligen fundera på följande:
* Vad fungerade bra i kursen?
* Vad skulle kunna förbättras?
* Vilka delar var mest lärorika?
* Vilka delar var mest utmanande?
* Hur väl förberedde lektionerna er för projektet?
* Fanns det tillräckligt med tid för projektet?
* Hur var balansen mellan teori och praktik?
* Några övriga synpunkter eller förslag?

## Avslutning
Stort tack för er insats under kursen! Ni har lärt er värdefulla färdigheter inom:
* Testautomation för inbyggda system.
* Google Test och C++-testning.
* Stubklasser och virtuell hårdvara.
* Python-baserad testautomation.
* Git och versionshantering.

Dessa kunskaper kommer vara användbara i framtida projekt och yrkesliv. Lycka till framöver!
